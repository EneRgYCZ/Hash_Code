#include <iostream>
using namespace std;

/*
Input type:
START: Duration - IntersectionsCount - StreetCount - CarCount - BonusPointsPerCar
STREET: StartPos - EndPos - Name - CrossDuration
CAR: TravelDistance - Path
*/

struct Roads
{
    int startPos, EndPos, CrossDuration;
    char Name[31];
    bool OneWay;
};

struct Car
{
    Roads r;
    int TravelDistance,TravelDuration;
};



int main()
{

    return 0;
}