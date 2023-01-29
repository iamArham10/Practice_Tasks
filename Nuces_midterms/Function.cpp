#include <iostream>
#include <cmath>
using namespace std;
main() {
    int number_of_terms;
    float x;
    cout<<"Enter value of x: ";
    cin >> x;
    cout<<"Enter number of terms: ";
    cin >> number_of_terms;
    float sum = 0;
    float power_x = 0;
    int diviser_power = 1;
    float value;
    for (int term = 1;term <= number_of_terms;term++)
    {
        value = pow(x,power_x)/pow(3,diviser_power);
        if (diviser_power % 2 == 0) 
        {
            value = value * -1;
        }
        sum = sum + value;
        power_x = power_x + 2;
        diviser_power = diviser_power + 1;

    }
    cout<<sum;
}