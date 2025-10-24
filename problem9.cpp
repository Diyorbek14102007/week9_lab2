#include <iostream>
using namespace std;
int maxDig(int n) {
    if (n == 0) {
        return 0;
    }
    int dig = n%10;
    int maxAll = maxDig(n/10);
    if (dig>maxAll) {
        return dig;
    }else {
        return maxAll;
    }
}
int main() {
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    cout <<maxDig(num);
    return 0;
}