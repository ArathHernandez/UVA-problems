#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    while(n!=0){
        int answer = n;
        int tempD = 0;
        char lw;
        bool first = true;
        while(n--){
            char aux = ' ';
            while(!isalnum(aux) && first){
                cin >> aux;
                lw = aux;
                n--;
            }
            
            
            if(first){
                first = false;
                n+=1;
                if(aux == 'Z') answer = 0;
                continue;
            }
            
            cin >> aux;
            
            if(aux == '.'){
                tempD++;
                continue;
            }
            
            if(aux == 'Z') answer = 0;
            else if(aux != lw){
                ++tempD;
                answer = min(tempD,answer);
                lw = aux;
                tempD = 0;
            }
            else if(aux == lw) tempD = 0;
            
        }
        
        cout << answer << endl;
        cin >> n;
    }

    return 0;
}
