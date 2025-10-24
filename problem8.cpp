#include <iostream>
using namespace std;

int Even(int n) {
    if (n <= 1)
        return 0;
    if (n % 2 != 0)
        n--;
    return n + Even(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << Even(n);
}