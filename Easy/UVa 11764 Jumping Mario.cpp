#include <iostream>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    for(int i = 0; i < tests; i++){
        int jumps; cin >> jumps;
        
        int aux; cin >> aux;
        int taller = 0, shorter = 0;
        
        jumps--;
        
        while(jumps--){
            int number; cin >> number;
            
            if(number > aux) taller++;
            else if(number < aux) shorter++;
            
            aux = number;
        }
        
        cout << "Case " << i+1 << ": " << taller << " " << shorter << endl;
        
    }

    return 0;
}
