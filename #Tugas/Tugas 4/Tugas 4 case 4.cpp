#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int sum = 0;
    for (int i = 1; i <= 9; i += 2) {
        sum += i;
        for (int j = 1; j <= i; j += 2) {
            printf("%d", j);
            if (j !=i) {
                printf(" * ");
            }
        }
        printf(" = %d\n", sum);
    }
    return 0;
}
