#include <iostream>

using namespace std;

int main()
{
    int numeroTask, tempoTotale;
    
    cin >> numeroTask;
    cin >> tempoTotale;
    
    for(int i = 0; i < numeroTask; i++)
    {
        int input;
        cin >> input;
        tempoTotale = tempoTotale - input;
        if(tempoTotale < 0)
        {
            cout << i;
            break;
        }
        if(i == numeroTask-1)
        {
            cout << numeroTask;
        }
    }
    return 0;
}
