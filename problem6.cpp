#include <iostream>
using namespace std;

int Digits(int n) {
    if (n == 0)
        return 0;
    return 1 + Digits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of digits: " << Digits(num) << endl;

    return 0;
}