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

int Duration, IntersectionsCount, StreetCount, CarCount, BonusPointsPerCar;

int StartPos, EndPos, CrossDuration;

char Name[31];

int TravelCount, Path[];

void read_File() // Reads the document
{
    fin >> Duration >> IntersectionsCount >> StreetCount >> CarCount >> BonusPointsPerCar;
    for (int i = 0; i < StreetCount; i++)
    {
        fin >> StartPos >> EndPos;
        fin.getline(Name, 31);
        fin >> CrossDuration;
    }
    for (int j = 0; j < CarCount; j++)
    {
        
    }
}

int main()
{
    read_File();
}