#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num_students;
    cout << "Please enter the number of students (1-100)"<<endl;
    cin >> num_students;
    if (num_students < 1 || num_students > 100) {
        cout << "The number of student is invalid"<<endl;
        return 0;
    }
    int grade;
    int sum = 0;
    for (int i = 0; i < num_students; i++) {
        cout << "Please enter a grade (0-100)"<<endl;
        cin >> grade;
        if (grade < 0 || grade > 100) {
            cout << "The grade is invalid"<<endl;
            i--;
            continue;
        }
        sum += grade;
    }
    double average =1.0+ sum / num_students;
    cout <<fixed<<setprecision(2)<<average<<endl;
    cout << "The average is " << average << endl;
}