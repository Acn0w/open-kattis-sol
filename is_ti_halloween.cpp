#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month, day;
    
    cin >> month;
    cin >> day;
    
    if(month.compare("OCT") == 0 && day.compare("31") == 0){
        cout << "yup" << endl;
    } else if(month.compare("DEC") == 0 && day.compare("25") == 0){
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
    
    return 0;
        
}
