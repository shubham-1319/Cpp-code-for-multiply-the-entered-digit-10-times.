#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        num *= num;
    }

    cout << "Result: " << num << endl;
    return 0;
}

