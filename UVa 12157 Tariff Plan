#include <iostream>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    for(int i = 1; i <= tests; i++){
        
        int calls; cin >> calls;
        int mile = 0, juice = 0;
        
        while(calls--){
            int duration; cin >> duration;
            
            mile += ((duration/30)*10);
            mile += 10;
            
            juice += ((duration/60)*15);
            juice += 15;

        }
        
        cout << "Case " << i << ": ";
        
        if(mile == juice) cout << "Mile Juice " << mile << endl;
        else if(mile > juice) cout << "Juice " << juice << endl;
        else cout << "Mile " << mile << endl; 
        
    }

    return 0;
}
