#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int begin, first, second, third; cin >> begin >> first >> second >> third;
    
    while(begin != 0 || first != 0 || second != 0 || third != 0){
        int total = 0, aux = 0;
        
        aux = (begin - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40;
        
        total = 1080 + (aux*9);
        
        cout << total << endl;
        
        cin >> begin >> first >> second >> third;
        
    }

    return 0;
}
