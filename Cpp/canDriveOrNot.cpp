#include <bits/stdc++.h>
using namespace std;

int main () {
    int age;
    cout << "Please, select your correct age: " << endl;
    cin >> age;
    if (age <= 18) {
        cout << "Kids don't drive, so stay home" << endl;
    }
    if (age > 60) {
        cout << "Sorry sir, you are too old to drive" << endl;
    }
    else {
        cout << "Feel free to drive" << endl;
    }
    return 0;
}