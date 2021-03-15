#include <iostream>
    #include <string>
    
    using namespace std;
    
    bool isPalindrome(string text){
        for(int i = 0, j = text.size()-1; i < j; i++, j--){
            if(text[i] != text[j]) return false;
        }
        
        return true;
    }
    
    bool isMirror(string text){
        for(int i = 0; i < text.size(); i++){
            if(text[i] == '3') text[i] = 'E';
            else if(text[i] == 'L') text[i] = 'J';
            else if(text[i] == 'S') text[i] = '2';
            else if(text[i] == 'Z') text[i] = '5';
            else if(text[i] == '5' || text[i] == '2' || text[i] == 'J' || text[i] == 'E' || text[i] == 'A' || text[i] == 'M' || text[i] == 'H' || text[i] == 'I' || text[i] == 'T' || text[i] == 'U' || text[i] == 'V' || text[i] == 'X' || text[i] == 'Y' || text[i] == '1' || text[i] == '8' || text[i] == 'O' || text[i] == 'W') continue;
            else return false;
        }
        
        return isPalindrome(text);
    }
    
    int main()
    {
        string input;
        
        while(cin >> input){
        
        bool a = isPalindrome(input);
        bool b = isMirror(input);
        
        if(a && b) cout << input << " -- is a mirrored palindrome." << endl;
        else if(a && !b) cout << input << " -- is a regular palindrome." << endl;
        else if(b && !a) cout << input << " -- is a mirrored string." << endl;
        else if(!a && !b) cout << input << " -- is not a palindrome." << endl;
        
        cout << endl;
        }
    
        return 0;
    }
