#include <iostream>
using namespace std;
int gcd(int num1, int num2) {
    int res = 1;
    int minLim;
    if (num1 < num2) {
        minLim = num1;

    }else {
        minLim = num2;
    }
    for (int i = 1; i <= minLim; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            res = i;
        }
    }
    return res;
}