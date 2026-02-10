#include <iostream>
using namespace std;

int main() {
    int x = 123;
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;      
        rev = rev * 10 + digit;  
        x /= 10;                 
    }

    cout << rev;
    return 0;
}
