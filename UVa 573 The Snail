#include <iostream>

using namespace std;

int main()
{
    
    while(true){
        float u;
         int h, d, f; cin >> h >> u >> d >> f;
        
        if(h == 0) break;
        
        int day = 1;
        float distance = 0;
        double common = u*f/100;
        bool flag = false;
        
        while(true){
            distance += u;
            
            if(distance > h){
                flag = true;
                break;
            }
            
            distance -= d;
            
            if(distance < 0) break;
            
            if(u>0) u -= common;
            
            day++;
            
        }
        
        if(flag) cout << "success ";
        else cout << "failure ";
        
        cout << "on day " << day << endl; 
    }
    
    return 0;
}
