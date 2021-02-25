#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream fin("Datasets/a.txt");

/*
Input type:
START: Duration - IntersectionsCount - StreetCount - CarCount - BonusPointsPerCar
STREET: StartPos - EndPos - Name - CrossDuration
CAR: TravelCount - Path
*/

//GLOBAL VARIABLES====================
int Duration, IntersectionsCount, StreetCount, CarCount, BonusPointsPerCar;
//====================================

//STRUCTS=============================
struct Roads
{
    int StartPos, EndPos, CrossDuration;
    char Name[31];
    bool OneWay;
};

struct Car
{
    int TravelDistance, TravelDuration;
    char StreetNames[10000][31];
};
//====================================

void read_File() // Reads the document
{
    fin >> Duration >> IntersectionsCount >> StreetCount >> CarCount >> BonusPointsPerCar;
    Car C1[CarCount];
    Roads R1[StreetCount];
    //GET STREET VALUES===============
    for (int i = 0; i < StreetCount; i++)
    {
        fin >> R1[i].StartPos >> R1[i].EndPos;
        fin.getline(R1[i].Name, 31);
        fin >> R1[i].CrossDuration;
    }
    //================================

    //GET CAR VALUES==================
    for (int i = 0; i < CarCount; i++)
    {
        fin >> C1[i].TravelDistance;
        for (int x = 0;x < C1[i].TravelDistance; x++)
        {
            fin.getline(C1[i].StreetNames[x], 31);
        }
    }
    //================================
}

int main()
{
    read_File();
}