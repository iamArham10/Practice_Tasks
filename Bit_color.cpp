#include <iostream>
#include <windows.h>
using namespace std;
#include <cmath>
int binary(int number);
void color(int number);
main()
{   cout<<"*******************************************************************************************************************"<<endl;
    cout<<"*                                                Soldier Flag                                                     *"<<endl;
    cout<<"*******************************************************************************************************************"<<endl;
    int number;
    cout << "Enter number from 0 - 255: ";
    cin >> number;
    int result = binary(number);
    color(result);
}
void color(int number)
{
    int first_bit = number / 10000000;
    number = number % 10000000;
    int second_bit = number / 1000000;
    number = number % 1000000;
    int third_bit = number / 100000;
    number = number % 100000;
    int fourth_bit = number / 10000;
    number = number % 10000;
    int fifth_bit = number / 1000;
    number = number / 1000;
    int sixth_bit = number / 100;
    number = number % 100;
    int seventh_bit = number / 10;
    int last_bit = number % 10;
    if (first_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        cout << "********************" << endl;
    }
    else
    {
        cout << "                    " << endl;
    }
    if (second_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout << "********************" << endl;
    }
    else
    {
        cout << "                    " << endl;
    }
    if (third_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        cout << "********************" << endl;
    }
    else
    {
        cout << "                    " << endl;
    }
    if (fourth_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "********************" << endl;
    }
    else
    {
        cout << "                    " << endl;
    }
    if (fifth_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
        cout << "********************" << endl;
    }
    else
    {
        cout << "                    " << endl;
    }
    if (sixth_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
        cout << "********************" << endl;
    }
    else 
    {
        cout << "                    " << endl;
    }
    if (seventh_bit == 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "********************" << endl;
    }
    else 
    {
        cout << "                    " << endl;
    }
    if (last_bit = 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        cout << "********************" << endl;
    }
    else 
    {
        cout << "                    " << endl;
    }
}

int binary(int n)
{
    int sum = 0;
    int last_digit = 0;
    int place = 1;
    while (n > 0)
    {
        last_digit = n % 2;
        n = n / 2;
        sum = sum + last_digit * place;
        place = place * 10;
    }
    return sum;
}
