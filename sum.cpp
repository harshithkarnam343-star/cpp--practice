#include <iostream>
using namespace std;

int main () {
    int sum =0,rem,n;
    cout << "Enter Number = ";
    cin >> n;

    while(n != 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n/10;
    }
cout << "Sum = " << sum;
}