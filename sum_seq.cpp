#include <stdio.h>

int main() {
    int sum = 0, i;
    for(i = 0; i <= 30; i += 2) {
        sum += i;
    }
    printf("Sum of the sequence = %d", sum);
    return 0;
}
