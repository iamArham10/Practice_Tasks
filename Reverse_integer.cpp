#include <iostream>
using namespace std;
int reverse(int num);
main() {
    cout<<"*********************************************************************************"<<endl;
    cout<<"*                 A program to reverse the given integer                        *"<<endl;
    cout<<"*********************************************************************************"<<endl;
    int number;
    cout<<"Enter Your Number: ";
    cin >> number;
    cout<<"The reverse of the give number is "<<reverse(number);
}
int reverse(int n)
{
    int last_digit = 0;
    int sum = 0;
    while (n != 0) {
        last_digit = n % 10;
        sum = sum*10 + last_digit;
        n = n / 10;
        
        }
    return sum;
}
