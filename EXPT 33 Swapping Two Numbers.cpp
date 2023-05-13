#include<stdio.h>
int main() {
double first, second, temp;
printf("Enter A Value : ");
scanf("%lf", &first);
printf("Enter B Value : ");
scanf("%lf", &second);
temp = first;
first = second;
second = temp;
printf("\nAfter swapping, A Value = %.2lf\n", first);
printf("After swapping, B Value = %.2lf", second);
return 0;
}

