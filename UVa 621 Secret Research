#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests--){
        string number; cin >> number;
        
        if(number == "1" || number == "4" || number == "78") cout << "+" << endl;
        else if(number[number.size()-1] == '5' && number[number.size()-2] == '3') cout << "-" << endl;
        else if(number[0] == '9' && number[number.size()-1] == '4') cout << "*" << endl;
        else cout << "?" << endl;
    }

    return 0;
}
