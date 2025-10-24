#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n_term;
    cout << "Please enter the number of terms: ";

cin >> n_term;
    for (int i = 1; i <= n_term; i++) {
        cout << fibonacci(i) << endl;
    }
    return 0;
}