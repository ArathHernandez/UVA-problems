#include <iostream>
using namespace std;

int main()
{   
    int tests; cin >> tests;
    int a = 1;
    
    while(tests != 0){
        int total = 0;
        
        while(tests--){
            int number; cin >> number;
            total += number >= 1 ? 1 : -1;
        }
        
        cout << "Case " << a << ": " << total << endl;
        a++;
        cin >> tests;
    }

    return 0;
}
