#include <iostream>
using namespace std;

int main() {
    int i = 1;
    if (i > 0) {
        cout << "00000000000" << endl;
    }

    int a, b, c;
    cout << "Enter 3 variables: " << endl;
    cin >> a >> b >> c;
    
    if (a > b && a > c) {
        cout << "a is the largest number" << endl;
    } else if (b > a && b > c) {
        cout << "b is the largest number" << endl;
    } else if (c > a && c > b) {
        cout << "c is the largest number" << endl;
    } else {
        cout << "There is no single largest number" << endl;
    }

    int month;
    cout << "Enter a number between 1 to 12" << endl;
    cin >> month;
    
    switch (month) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}

