#include <iostream>

using namespace std;

int main()
{ 
    int a, b; cin >> a >> b;
    
    while(a != -1 || b != -1){
        if(a == b){
          cout << 0 << endl;
          cin >> a >> b;
          continue;
        }
        
        int c,d;
        
        if(a > b){
            c = a-b;
            d = b+100-a;
        }
        else{
            c = b-a;
            d = a+100-b;
        }
        
        if(c > d) cout << d << endl;
        else cout << c << endl;
        
        cin >> a >> b;
    }

    return 0;
}
