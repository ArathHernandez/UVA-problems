#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{   
    int k, m; cin >> k;
    
    while(k != 0){
        cin >> m;
        unordered_map<int,int>courses;
        bool flag = true;
        
        while(k--){
            int aux; cin >> aux;
            courses[aux] = 1;
        }
        
        while(m--){
            int a,b; cin >> a >> b;
            
            while(a--){
                int ayuda; cin >> ayuda;
                if(courses[ayuda] == 1) b--;
            }
            
            if(b>0){
                flag = false;
            }
        }
        
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
        cin >> k;
    }

    return 0;
}
