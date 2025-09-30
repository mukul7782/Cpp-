
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int count101 = 0, count10 = 0, count1 = 0;

    switch (1) {
        case 1:
            count101 = amount / 101;
            amount %= 101;
        case 2:
            count10 = amount / 10;
            amount %= 10;
        case 3:
            count1 = amount;
            break;
    }

    cout << "Notes of 101: " << count101 << endl;
    cout << "Notes of 10: " << count10 << endl;
    cout << "Notes of 1: " << count1 << endl;

    return 0;
}