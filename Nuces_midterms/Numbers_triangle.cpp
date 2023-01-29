#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int f = 1;
    for (int lines = 1; lines <= n ;lines++) {
        for (int spaces = (n-lines);spaces >= 1; spaces--) {
            cout<<"   ";
        }
        for (int j = lines;j <= f;j++)
        {
            cout<<" "<<j<<" ";
        }
        for (int k = (f-1);k>=lines;k--)
        {
            cout<<" "<<k<<" ";
        }
        f = f+2;
        cout<<endl;

    }
}