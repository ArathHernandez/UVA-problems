#include <iostream>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests--){
       int a, b; cin >> a >> b;
       
       if(a == b) cout << "=" << endl;
       else{
           if(a > b) cout << ">" << endl;
           else cout << "<" << endl;
       }
    }

    return 0;
}
