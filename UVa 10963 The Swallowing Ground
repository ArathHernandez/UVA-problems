#include <iostream>
using namespace std;

int main() {
    
    int tests; cin >> tests;
    
    while(tests--){
        cin.ignore();
        
        int n; cin >> n; 
        n-=1;
        
        int a, b; cin >> a >> b;
        int d = a-b;
        
        bool flag = true;
        
        while(n--){
            cin >> a >> b;
            if(d != a-b) flag = false;
        }
        
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
        
        if(tests) cout << endl;
    }

	return 0;
}
