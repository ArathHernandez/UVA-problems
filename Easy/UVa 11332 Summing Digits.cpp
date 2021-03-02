#include <iostream>
using namespace std;

int sum(int number){
    int aux = 0;
    
    while(number >= 10){
        aux += (number%10);
        number/=10;
    }
    
    aux += number;
    
    return aux;
}

int main() {
    
    int number; cin >> number;
    
    while(number != 0){
        
        while(number >= 10){
            number = sum(number);
        }
        
        cout << number << endl;;
        
        cin >> number;
    }

	return 0;
}
