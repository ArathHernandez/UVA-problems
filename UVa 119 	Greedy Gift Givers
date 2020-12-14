#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int people = 0;
    cin >> people;
    
    while(true){
        vector<string>names;
        unordered_map<string,int>money;
        
        for(int i = 0; i < people; i++){
            string aux; cin >> aux; 
            names.push_back(aux);
            money[aux] = 0;
        }
        
        for(int i = 0; i < people; i++){
            string aux; cin >> aux;
            int price; cin >> price;
            int gifts; cin >> gifts;
            
            for(int j = 0; j < gifts; j++){
                string other; cin >> other;
                money[other] += (price/gifts);
            }
            
            if(price != 0 && gifts != 0){
                money[aux] -= ((price)-(price%gifts));
            }
        }
        
        for(string i : names){
            cout << i << " " << money[i] << endl;
        }
        
        if(cin >> people){
            cout << endl;
        }
        else 
            break;
    }
    
    return 0;
}
