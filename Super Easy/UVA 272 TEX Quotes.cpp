#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    bool before = false;
    
    while(getline(cin,text)){
        
        for(int i = 0; i < text.size(); i++){
            if(text[i] == '"' && !before){
                before = true;
                text[i] = '`'; text.insert(text.begin()+i, '`');
            }
            else if(text[i] == '"' && before){
                before = false;
                text.erase(text.begin()+i);
                text.insert(i, "''");
            }
        }
        
        cout << text << endl;
        
    }

    return 0;
}
