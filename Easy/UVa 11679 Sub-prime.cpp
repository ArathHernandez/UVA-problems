#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int banks, debts; cin >> banks >> debts;
    
    while(banks != 0 || debts != 0){
        vector<int>deudas;
        
        for(int i = 0; i < banks; i++){
            int number;
            cin >> number; deudas.push_back(number);
        }
        
        for(int i = 0; i < debts; i++){
            int b1, b2, pay; cin >> b1 >> b2 >> pay;
            
            deudas[b1-1] -= pay;
            deudas[b2-1] += pay;
        }
        
        bool flag = true;
        
        for(int i : deudas){
            if(i < 0) flag = false;
        }
        
        if(flag) cout << "S" << endl;
        else cout << "N" << endl;
        
        cin >> banks >> debts;
    }

	return 0;
}
