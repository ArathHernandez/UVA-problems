#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool completeCards(stack<char>&p1, stack<char>&p2, int& counter, int toComplete, bool ppl1){
    
    if(ppl1){
        
    }
    else{
        
    }
    
    return 
}

int main()
{
    string game;
    stack<char>p1,p2;
    
    while(cin >> game, game != "#"){
        string game2; cin >> game2;
        
        p1.push(game[1]);
        p2.push(game2[1]);
    }
    
    int counter = 0;
    int turn = 1;
    int p1s = 0, p2s = 0;
    
    while(!p1.empty() && !p2.empty()){
        if(((p1.top() > 49 && p1.top() < 58) || p1.top() == 'T') && turn == 1){
            counter+=1;
            p1.pop();
            turn = 2;
        }
        else if(turn == 1){
            int toComplete;
            
            if(p1.top() == 'A') toComplete = 4;
            else if(p1.top() == 'K') toComplete = 3;
            else if(p1.top() == 'Q') toComplete = 2;
            else toComplete = 1;
        }
        if(((p2.top() > 49 && p2.top() < 58) || p1.top() == 'T') && turn == 2){
            counter+=1;
            p2.pop();
            turn = 1;
        }
        else if(turn == 2){
            int toComplete;
            
            if(p2.top() == 'A') toComplete = 4;
            else if(p2.top() == 'K') toComplete = 3;
            else if(p2.top() == 'Q') toComplete = 2;
            else toComplete = 1;
        }
    }
    
    if(p1s > p2s) cout << "2 " << p1s << endl;
    else cout << "1 " << p2s << endl;
}
