#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char lines[100][500];
    int n = 0;

    while (n < 100 && fin.getline(lines[n], 500))
    {
        n++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        fout << lines[i] << endl;
    }
    fin.close();
    fout.close();
}