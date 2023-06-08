#include <stdio.h>
int main()
{
	int n,r,m,rev;
	printf("Enter a number :");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(rev==m)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
	return 0;
}
