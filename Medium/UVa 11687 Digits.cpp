#include <iostream>
#include <string>
using namespace std;

size_t recurrence(int i, string number)
{
    size_t nDigits = number.size();
    
    string ss;
    ss = to_string(nDigits);
    
    
    if (ss == number) 
        return i;
    return recurrence(i + 1, ss);
}

int main()
{  
    string number;
    while (cin >> number, number != "END")
    {
        cout << recurrence(1, number) << endl;
    }
    return 0;
}
