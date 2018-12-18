#include <iostream>
#include <cstring>

#define MAX 20

using namespace std;

int main()
{
    char set[MAX][MAX], aux[MAX];;
    int k, n;
    
    k = 1;
    
    while(1){
        
        cin >> n;
        
        if(n == 0) break;
        
        for(int i = 0; i < n; i++){
            cin >> set[i];
        }
        
        for(int i = 0; i < n; i++){
        
            if(strcmp(set[i],set[i+1]) > 0){
                strcpy(aux, set[i]);
    		    strcpy(set[i], set[i+1]);
    	        strcpy(set[i+1], aux);
            }
        }
        
        cout << "SET " << k++ << endl;
        for(int i = 0; i < n; i++){
            cout << set[i] << endl;
        }
    }
    
    return 0;
        
}
