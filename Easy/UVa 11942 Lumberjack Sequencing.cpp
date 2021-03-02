#include <iostream>
#include <climits> 

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    cout << "Lumberjacks:" << endl;
    
    while(tests--){
        
        bool flag = true, up = true;
        
        int n1,n2; cin >> n1 >> n2;
        
        if(n2 < n1) up = false;
        
        for(int i = 0; i < 8; i++){
            int number; cin >> number;
            
            if(up){
                if(number<n2) flag = false;
                else n2 = number;
            }
            else{
                if(number>n2) flag = false;
                else n2 = number;
            }
        }
        
        if(flag) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }

    return 0;
}
