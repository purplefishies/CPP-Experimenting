#include "Car.h"

Car::Car(int yr, int mil)
{
    this->year = yr;
    this->mileage = mil;
}

void Car::Drive( int miles )
{
    this->mileage += miles;
}

int Car::getYear()
{
    return year;
}

int Car::getMileage()
{
    return mileage;
}

#ifdef SELF_TEST
#include <gtest/gtest.h>
#include <iostream>
using namespace std;


TEST(Car,First) 
{
    ASSERT_EQ(1,1) << "Should be the same value";
    Car *cp = new Car(1900,0);

    delete cp;
}

int main(int argc, char *argv[] ) 
{
    testing::InitGoogleTest(&argc, argv);
    testing::TestEventListeners & listeners = testing::UnitTest::GetInstance()->listeners();

    return RUN_ALL_TESTS();

}


#endif

