#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, p;
    int a = 1;
    bool flag = true;
    
    while(cin >> n >> p){
        if(n==0&&p==0) break;
        string bestM;
        float lowestP = 0;
        int bestR = 0;
        cin.ignore();
        for(int i = 0; i < n; i++){
            string aux; getline(cin,aux);
        }
        
        if(!flag) cout << endl;
        else flag = false;
        
        for(int j = 0; j < p; j++){
            string mark; getline(cin,mark);
            float price; cin >> price;
            int tempR; cin >> tempR;
             cin.ignore();
            
            for(int i = 0; i < tempR; i++){
                string aux; getline(cin,aux);
            }
            
            if(tempR > bestR){
                bestM = mark;
                lowestP = price;
                bestR = tempR;
            }
            
            if(tempR == bestR){
                if(price < lowestP){
                    bestM = mark;
                    lowestP = price;
                }
            }
            
        }
        
        
        cout << "RFP #" << a << endl;
        cout << bestM << endl;
        
        a++;
    }

    return 0;
}
