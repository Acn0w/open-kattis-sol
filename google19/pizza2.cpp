#include <iostream>
#define MAX 1000

using namespace std;

int main()
{
    //int era un po' ecessivo
    short int row,colum,ingredients,num_cells;
    char pizza [MAX][MAX];

    //leggo uno a uno i dati
    cin >> row;
    cin >> colum;
    cin >> ingredients;
    cin >> num_cells;

    //riempimento matrice
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            cin >> pizza[i][j];
        }

    }


    return 0;
}
