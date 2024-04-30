#include <iostream>

using namespace std;

int main() {
    int start = 10;
    int sum = 0;
    int total = 110;

    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << start;
            sum += start;
            if (j < i) {
                cout << " + ";
            }
            start -= 2;
        }
        cout << " = " << sum << endl;
        sum = 0;
        start = 10;
    }
    cout << "----------" << endl;
    cout << total << endl;

    return 0;
}
