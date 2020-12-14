#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int people; cin >> people;
    
    vector<string>names;
    vector<string>song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    
    for(int i = 0; i < people; i++){
        string n; cin >> n;
        
        names.push_back(n);
    }
    
    bool flag = false;
    
    int i = 0;
    int j = 0;
    
    while(true){
        if(flag && i == 16) break;   
        
        if(i == 16) i = 0;
        if(j == people){ j = 0; flag = true;}
        
        cout << names[j] << ": " << song[i] << endl;
        
        
        
        i++;j++;
    }
    
    
    return 0;
}
