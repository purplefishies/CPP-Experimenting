#ifndef CAR_H
#define CAR_H


class Car
{
 private:
    int year;
    int mileage;

 public:
    Car(int year, int mileage);
    void Drive( int miles );
    int getYear();
    int getMileage();
};


#endif
