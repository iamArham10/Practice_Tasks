#include <iostream>
using namespace std;

bool right_angle(int a,int b,int c) {
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        return true;
    }
    return false;
}
main() {
    int side_a,side_b,side_c;
    cout<<"Enter side no one ";
    cin >> side_a;
    cout<<"Enter side no two ";
    cin >> side_b;
    cout<<"Enter side no three ";
    cin >> side_c;
    bool result = right_angle(side_a,side_b,side_c);
    if (result == true) {
        cout<<"Given triangle is a right angle triangle";

    }
    else {
        cout<<"Give triangle is not a right angle triangle";
    }

}