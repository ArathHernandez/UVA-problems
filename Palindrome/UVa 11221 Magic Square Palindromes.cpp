#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>
#include <vector>

#include <list>

#include <map>

#include <set>

#include <deque>

#include <queue>

#include <stack>

#include <bitset>

#include <algorithm>

#include <functional>

#include <numeric>

#include <utility>

#include <sstream>

#include <iostream>

#include <iomanip>

#include <cstdio>

#include <cmath>

#include <cstdlib>

#include <cctype>

#include <string>

#include <cstring>

#include <cstdio>

#include <cmath>

#include <cstdlib>

#include <ctime>


using namespace std;

int main()
{
    int n; cin >> n;
    cin.ignore();
    for(int t = 1; t <= n; t++){
        string text; getline(cin,text);
        int i = 0, j =0;
        
            string str;
            for(int h = 0; h < text.size(); h++){
                if(isalpha(text[h])){
                    str+=text[h];
                }
            }
            
            int slen = (int)sqrt(str.size());
            int k = 0;
            string nstr = "";
            
            cout << "Case #" << t << ":" << endl;
            if(slen*slen < str.size()){

                         cout<<"No magic :(\n";

                         continue;

            }

            char mat[slen][slen];

            for(i=0; i<slen; i++){

                     for(j=0; j<slen; j++){

                              mat[i][j] = str[k++];

                     }

            }

            for(j=0; j<slen; j++){

                     for(i=0; i<slen; i++){

                              nstr += mat[i][j];

                     }

            }

            if(nstr != str){

                    cout<<"No magic :(\n";

                    continue;

            }

            nstr = "";

            for(i=slen-1; i>=0; i--){

                          for(j=slen-1; j>=0; j--){

                                        nstr += mat[i][j];

                          }

            }

            if(nstr != str){

                    cout<<"No magic :(\n";

                    continue;

            }

            nstr = "";

            for(j=slen-1; j>=0; j--){

                          for(i=slen-1; i>=0; i--){

                                        nstr += mat[i][j];

                          }

            }

            if(nstr != str){

                    cout<<"No magic :(\n";

                    continue;

            }

            cout<<slen<<endl;
    }
    
    return 0;
}
