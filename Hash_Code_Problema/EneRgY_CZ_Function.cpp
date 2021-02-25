#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Datasets/a.txt");

int D, I, S, V, F;

void read()
{
    fin >> D >> I >> S >> V >> F;
}

int main()
{
    read();
}