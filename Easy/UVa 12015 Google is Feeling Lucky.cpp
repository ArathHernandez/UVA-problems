#include <iostream>
#include <string>
#include <climits>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int tests; cin >> tests;
    
    for(int i = 1; i <= tests; i++){
        
        unordered_map<int,vector<string>>pages;
        int maxNumber = INT_MIN;
        
        cin.ignore();
        
        for(int j = 0; j < 10; j++){
            string text; int found;
            getline(cin, text);
            
            found = text.find(' ');
            
            int number = stoi(text.substr(found));
            
            if(number > maxNumber) maxNumber = number;
            
            pages[number].push_back(text.substr(0,found));
        }
        
        
        
        cout << "Case #" << i << ":" << endl;
        
        for(string i : pages[maxNumber]){
            cout << i << endl;
        }
        
    }

    return 0;
}
