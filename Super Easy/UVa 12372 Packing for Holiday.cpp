#include <iostream>
using namespace std;

int main()
{   
    int tests; cin >> tests;
    
    for(int i = 1; i <= tests; i++){
        int a,b,c; cin >> a >> b >> c;
        
        if(a > 20 || b > 20 || c > 20) cout << "Case " << i << ": " << "bad" << endl;
        else cout << "Case " << i << ": " << "good" << endl;
    }

    return 0;
}
