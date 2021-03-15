#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
    
int main()
{
    string text;
    while(true){
        getline(cin,text);
        if(text == "DONE") break;
        bool answer = true;
        
        for(int i = 0, j = text.size()-1; i < j; i++, j--){
            while(!isalnum(text[i])) i++;
            while(!isalnum(text[j])) j--;
            
            if(tolower(text[i]) != tolower(text[j])){
                answer = false;
                break;
            }
        }
        
        if(answer) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;
    }
    
    return 0;
}
