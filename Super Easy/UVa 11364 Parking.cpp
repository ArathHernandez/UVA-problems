#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tests; cin >> tests;
    
    while(tests--){
       int numbers; cin >> numbers;
       vector<int>order;
       int total = 0;
       
       for(int i = 0; i < numbers; i++){
           int temp; cin >> temp;
           order.push_back(temp);
       }
       
       sort(order.begin(),order.end());
       
       for(int i = 1; i < numbers; i++){
           total += (order[i]-order[i-1]);
       }
       
       total *= 2;
       
       cout << total << endl;
    }

    return 0;
}
