#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    while(n!=0){
        
        int m; cin >> m;
        int ln = n;
        int aux;
        int answer = 0;
        
        while(m--){
            cin >> aux;
            
            if(ln > aux) answer+=ln-aux;
            
            ln = aux;
        }
        
        cout << answer << endl;
        cin >> n;
    }

    return 0;
}
