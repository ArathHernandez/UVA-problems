#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests--){
       int a, b; cin >> a >> b;
       
       cout << (a/3)*(b/3) << endl;
    }

    return 0;
}
