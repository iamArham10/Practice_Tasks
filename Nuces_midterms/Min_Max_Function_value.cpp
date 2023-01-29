#include <iostream>
using namespace std;
int main() {
    int sum;
    int max;
    int min;
    int extra_min;
    int extra_max;
    int last_sum = 0;
    for (int k = -9; k <= 8 ; k++) {
        sum = (k*k) + (3*k) + 2;
        if (sum > last_sum) {
            max = sum;
            extra_max = sum + k;
        }
        if (sum < last_sum) {
            min = sum;
            extra_min = sum + k; 
        }
        last_sum = sum;
    }
    int min_k = extra_min - min;
    int max_k = extra_max - max;
    cout<<"MAx Value is : "<<max<<" at "<<max_k<<endl;
    cout<<"Min Value is : "<<min<<" at "<<min_k<<endl;
}
