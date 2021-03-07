#include <iostream>
#include <string>
#include <unordered_map>
#include <iomanip>
using namespace std;

int main()
{  
    int t; cin >> t;
    
    for(int i = 1; i <= t; i++){
        unordered_map<int,int>counters;
        int a = 1;
        
            for(int f =1; f<=100; f++){
                counters[f] = 0;
            }
        
        string neww; cin >> neww;
        
        for(char b : neww){
            if(b == '>'){
                a++;
                if(a > 100) a = 1;
            }
            else if(b == '<'){
                a--;
                if(a < 1) a = 100;
            }
            else if(b == '+'){
                counters[a]++;
                if(counters[a] > 255) counters[a] = 0;
            }
            else if(b == '-'){
                counters[a]--;
                if(counters[a] < 0) counters[a] = 255;
            }
        }
        
        cout << "Case " << i << ":";
        for(int j = 1; j <= 100; j++){
            printf(" %02X",counters[j]);
        }
        
        cout << endl;
    }
    
    return 0;
}
