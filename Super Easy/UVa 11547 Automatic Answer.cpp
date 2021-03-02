#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests--){
        
        long long number; cin >> number;
        
        number = ((((((number*567)/9)+7492)*235)/47)-498) % 100;
        
        number = abs(number/10);
        
        cout << number << endl;
    }

    return 0;
}
