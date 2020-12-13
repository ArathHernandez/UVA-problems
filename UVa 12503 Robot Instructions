#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{ 
    int tests; cin >> tests;
    
    while(tests--){
        int n; cin >> n;
        vector<int>moves;
        int position = 0;
        
        while(n--){
            string text; cin >> text;
            
            if(text == "LEFT"){
                position--;
                moves.push_back(-1);
            }
            else if(text == "RIGHT"){
                position++;
                moves.push_back(1);
            }
            else{
                string ignore; cin >> ignore;
                int number; cin >> number;
                moves.push_back(moves[number-1]);
                
                position += moves[number-1];
            }
        }
        
        cout << position << endl;
    }

    return 0;
}
