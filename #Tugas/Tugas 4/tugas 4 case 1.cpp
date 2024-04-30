#include <iostream>

using namespace std;

int main () {
    int sum = 0;
    for (int i = 2; i <= 20; i +=2) {
        sum  += i;
        if (i != 20){
            printf ("%d + ", i );
        } else {
            printf ("%d", i);
        }
    }
        printf ("= %d\n", sum );
    return 0;
}
