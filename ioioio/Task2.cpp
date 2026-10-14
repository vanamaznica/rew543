#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char line[500];

    while (fin.getline(line, 500))
    {
        fout << line << endl;
    }

    fin.close();
    fout.close();
}