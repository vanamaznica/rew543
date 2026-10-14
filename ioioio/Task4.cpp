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
    int pos = -1;

    while (n < 100 && fin.getline(lines[n], 500))
    {
        if (strchr(lines[n], ' ') == nullptr)
        {
            pos = n;
        }

        n++;
    }

    for (int i = 0; i < n; i++)
    {
        fout << lines[i] << endl;

        if (i == pos)
        {
            fout << "------------" << endl;
        }
    }

    if (pos == -1)
    {
        fout << "------------" << endl;
    }
    fin.close();
    fout.close();
}