#include <iostream>
using namespace std;

int main () {
    int n,rem,product = 1;
    cout << "Enter Number : ";
    cin >> n;

    while (n != 0)
    {
     rem = n%10;
     product = product * rem;
     n = n/10;
    }
    cout << "Product = " << product; 
return 0;   
}