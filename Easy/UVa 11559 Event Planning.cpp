#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int people;
    
    while(cin >> people){
        int budget, hotel, rooms; cin >> budget >> hotel >> rooms;
        bool flag = true;
        int total = INT_MAX;
        
        for(int i = 0; i < hotel; i++){
            int cost; cin >> cost;
            
                for(int j = 0; j < rooms; j++){
                    int av; cin >> av;
                    
                    if(av >= people){
                        if(cost*people < budget && cost*people < total){
                            flag = false;
                            total = cost*people;
                        }
                    }
                }
        }
        
        if(flag) cout << "stay home" << endl;
        else cout << total << endl;
    }

	return 0;
}
