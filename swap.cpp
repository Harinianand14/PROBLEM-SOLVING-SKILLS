#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the first  number (a):");
	scanf("%d",&a);
	printf("Enter the second number (b):");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping (a) :%d\n",a);
	printf("After swapping (b) :%d",b);
	return 0;
}
