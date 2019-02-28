#include <iostream>
#include <fstream>
#define MAX 1000

using namespace std;

int main(string file_name)
{
    //int era un po' ecessivo
    short int row,colum,ingredients,num_cells;
    char pizza [MAX][MAX];
    ofstream solution;
    ifstream input;

    //apro file
    input.open (file_name);

    //nel caso non aprisse il file
    if (!input.is_open())
        return;

    //leggo uno a uno i dati
    input >> row;
    input >> colum;
    input >> ingredients;
    input >> num_cells;

    //riempimento matrice
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            pizza[i][j] = input.get();
        }

    }

    input.close();

    /*
    solution.open("sol.txt");

    /!|/!|/!|/!|/!|/!|/!|
    da inserire i valori nel file
    solution << "lettere da inserire nel file"
    /!|/!|/!|/!|/!|/!|/!|

    solution.close();*/
    return 0;
}
