#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    
    int a = 1;
    int x; string n;
    
    while(cin >> n >> x){
        if(n[0] == '0' && x == 0) break;
        vector<int>changes(n.size(),0);
        
        for(int i = 1; i < n.size(); i++){
            if(n[i] != n[i-1]) changes[i]+=(1+changes[i-1]);
            else changes[i] = changes[i-1];
        }
    
        cout << "Case " << a << ":" << endl;
        
        while(x--){
            if(n.size() == 1){
                int i; cin >> i;
                cout << "Yes" << endl;
                continue;
            }
            int i,j; cin >> i >> j;
            if(changes[min(i,j)] == changes[max(i,j)]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        
        a++;
    }
    return 0;
}
