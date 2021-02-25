#include <iostream>
using namespace std;

/*
Input type:
START: Duration - IntersectionsCount - StreetCount - CarCount - BonusPointsPerCar
STREET: StartPos - EndPos - Name - CrossDuration
CAR: StartPos - Path
*/

struct Roads{
    int startPos, EndPos, CrossDuration;
    string Name;
    
};

struct Car{
    Roads r;
    int startPos;
    int *path;

};







int main ()
{

    return 0;
}