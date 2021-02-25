#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("Datasets/a.txt");

/*
○ D (1 ≤ D ≤ 104) - the duration of the simulation, in seconds,
○ I (2 ≤ I ≤ 105) - the number of intersections (with IDs from 0 to I-1),
○ S (2 ≤ S ≤ 105) - the number of streets,
○ V (1≤V≤103)- the number of cars,
○ F (1 ≤ F ≤ 103) - the bonus points for each car that reaches its destination before time D.
*/

int D, I, S, V, F;

void read ()
{   
    fin >> D >> I >> S >> V >> F;
}

int main ()
{
    read();
}