#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char word[100];

    while (fin >> word)
    {
        if (strlen(word) >= 7)
        {
            fout << word << " ";
        }
    }
    fin.close();
    fout.close();
}