#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("b_little_bit_of_everything.in");

int main ()
{
    int n; 
    char s[256];
    char *q;
    q = strtok(s, " ");
    fin >> n;
    while (n)
    {
        cin.getline(s, 256);
        while (q)
        {   
            cout << q << endl;
            q = strtok(NULL, " ");
        }
        n--;
    }
}