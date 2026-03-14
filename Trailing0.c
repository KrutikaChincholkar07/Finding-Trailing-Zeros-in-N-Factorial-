#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    printf("Trailing zeros in %d! = %d", n, count);

    return 0;
}
