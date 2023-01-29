#include <iostream>
using namespace std;
void minimum_notes(int num);
main() {
    int num;
    cout<<"Enter amount: ";
    cin >> num;
    minimum_notes(num);
    }
void minimum_notes(int n) {
    int five_hundreds = 0;
    int hundreds = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int two = 0;
    int one = 0;
    if (n >= 500) 
    {
        five_hundreds = n/500;
        n = n%500;
    }
    if (n >= 100)
    {
        hundreds = n/100;
        n = n%100;
    }
    if (n >= 50)
    {
        fifty = n/50;
        n = n%50;
    }
    if (n >= 20)
    {
        twenty = n/20;
        n = n%20;
    }
    if (n >= 10)
    {
        ten = n/10;
        n = n%10;
    }
    if (n >= five)
    {
        five = n/5;
        n = n%5;
    }
    if (n >= 2)
    {
        two = n/2;
        n = n%2;
    }
    if (n >= 1)
    {
        one = n/1;
        n = n%1;
    }
    cout<<"500: "<<five_hundreds<<endl;
    cout<<"100: "<<hundreds<<endl;
    cout<<" 50: "<<fifty<<endl;
    cout<<" 20: "<<twenty<<endl;
    cout<<" 10: "<<ten<<endl;
    cout<<"  5: "<<five<<endl;
    cout<<"  2: "<<two<<endl;
    cout<<"  1: "<<one;
}