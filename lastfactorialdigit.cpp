#include <iostream>

#define MAX 10

using namespace std;

int factorial(int x, int result = 1) {
  if (x == 1) return result; 
  else return factorial(x - 1, x * result);
}

int main() 
{
    int n, fact[MAX];
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> fact[i];
    }
    
    for(int i = 0; i < n; i++){
        if (fact[i] == 1 || fact[i] == 2 || fact[i] == 3) cout << factorial(fact[i]) << endl;
        else if (fact[i] == 4) cout << "4" << endl;
        else cout << "0" << endl;
    }
    
    return 0;
}
