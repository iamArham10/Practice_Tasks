#include <iostream>
using namespace std;
#include <cmath>
int binary(int number);
main()
{
    int id;
    string name;
    cout << "Enter Your name: ";
    cin >> name;
    cout << "Enter Your ID: ";
    cin >> id;
    cout << binary(id);
}
int binary(int n)
{
    int last_digit;
    int sum = 0;
    int place = 1;
    while (n > 0)
    {
        last_digit = n % 2;
        n = n / 2;
        sum = sum + last_digit*place;
        
        place = place*10;
        
    }
    return sum;
}