#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{   
    string text = ""; cin >> text;
    unordered_map<string,string>language;
    
    language["HELLO"] = "ENGLISH";
    language["HOLA"] = "SPANISH";
    language["HALLO"] = "GERMAN";
    language["BONJOUR"] = "FRENCH";
    language["CIAO"] = "ITALIAN";
    language["ZDRAVSTVUJTE"] = "RUSSIAN";
    
    int i = 1;
    
    while(text != "#"){
        
        if(language[text].empty()) cout << "Case " << i << ": " << "UNKNOWN" << endl;
        else{
            cout << "Case " << i << ": " << language[text] << endl;
        }
        
        i++;
        
        cin >> text;
    }

    return 0;
}
