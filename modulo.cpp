#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 10

int main(){
    
    int x[MAX], mod[MAX];
    int counter = 0;
    
    for(int i = 0; i < MAX; i++){
        cin >> x[i];
        mod[i] = x[i] % 42;
    }
    
    sort(mod, mod + MAX);
    for(int i = 0; i < MAX; i++){
        if(mod[i] == mod[i+1]) continue;
        else counter++;
    }
    
    if(counter == 0) cout << 1 << endl;
    else cout << counter << endl;
    
    return 0;
}
