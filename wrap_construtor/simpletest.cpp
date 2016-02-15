#include <iostream>
#include "Car.h"

using namespace std;

int main(int argc, char *argv[] ) 
{

    Car *cp = new Car(1900,1000 );

    cout << "Allocated new Car\n";
    cout << "Mileage: " << cp->getMileage() << "\n";
    cout << "Year: " << cp->getYear() << "\n";
    
    delete cp;

}


