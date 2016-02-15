#include "Car.h"
#include <dlfcn.h>
#include <iostream>
#include <string.h>


Car::Car(int yr, int mil)
{
    // define the pointer-to-member type
    typedef unsigned int (Car::*methodType)(int,int) const;
    static methodType origMethod = 0;
    if (origMethod == 0)
        {
            // use the mangled method name here. RTLD_NEXT means something like
            // "search this symbol in any libraries loaded after the current one".
            // We had to go searching for the original function name using
            // nm libwraptest.so
            void *tmpPtr = dlsym(RTLD_NEXT, "_ZN3CarC1Eii");
            
            memcpy(&origMethod, &tmpPtr, sizeof(&tmpPtr));
        }
    
    // here we call the original method
    std::cout << "About to call original method\n";
    
    (this->*origMethod)(yr, mil);
    
    std::cout << "Done calling the original method\n";

}


