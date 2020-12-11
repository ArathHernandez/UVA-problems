#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests != 0){
        int horizontal, vertical; cin >> horizontal >> vertical;
        
        for(int i = 0; i < tests; i++){
            int auxH, auxV; cin >> auxH >> auxV;
            
            if(auxH == horizontal || auxV == vertical) cout << "divisa" << endl;
            else{
                if(auxV > vertical) cout << "N";
                else cout << "S";
                
                if(auxH > horizontal) cout << "E" << endl;
                else cout << "O" << endl;
            }
        }
        
        cin >> tests;
    }

    return 0;
}
