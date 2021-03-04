#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    
    cin.ignore();
    while(n--){
        string aux; getline(cin,aux);
        int ms = 0, fs = 0;
        
        for(char a : aux){
            if(a == 'M') ms++;
            if(a == 'F') fs++;
        }
        
        if(ms==fs && aux.size() > 4) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }

    return 0;
}
