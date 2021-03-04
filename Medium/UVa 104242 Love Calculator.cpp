#include <ctype.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string uno, dos;
    while(getline(cin,uno)){
        getline(cin,dos);
        
        int resultUno = 0, resultDos = 0;
        
        for(char a : uno){
            if(isalnum(a))
            resultUno += (tolower(a)-'a'+1);
        }
        for(char a : dos){
            if(isalnum(a))
            resultDos += (tolower(a)-'a'+1);
        }
        
        int unoMin = 0, dosMin = 0;
        
        while(resultUno){
            unoMin += (resultUno%10);
            resultUno /= 10;
            
            if(!resultUno && unoMin > 9){
                resultUno = unoMin;
                unoMin = 0;
            }
        }
        
        while(resultDos){
            dosMin += (resultDos%10);
            resultDos /= 10;
        
        if(!resultDos && dosMin > 9){
                resultDos = dosMin;
                dosMin = 0;
            }
        }
        
        float r1, m1 = float(unoMin), m2 = float(dosMin);
        r1 = min(m1,m2)/max(m1,m2);
        
        r1 *= 100;
        
        if(r1 < 100) cout.precision(4);
        else cout.precision(5);
        
        cout << showpoint << r1 << " %" << endl;
    }

    return 0;
}
