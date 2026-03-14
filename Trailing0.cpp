#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    cout << "Trailing zeros in " << n << "! = " << count;

    return 0;
}
