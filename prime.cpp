#include <iostream>
using namespace std;
int main () {
    int n,i,flag=0;
    cout << " Enter Number : ";
    cin >> n;

    for ( i = 2; i < n; i++)
    {
       if (n % i == 0) {
        flag = 1;
        break;
       }
    }

    if (flag == 0) {
       cout << "Prime no";
    }
    else 
    cout << "Not A Prime No";
    
}