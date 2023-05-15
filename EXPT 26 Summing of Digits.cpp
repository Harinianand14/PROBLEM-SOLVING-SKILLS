#include<stdio.h>
#include<conio.h>
int main()
{
int num,r,s=0;
printf("\nEnter a number:");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
s=s+r;
num=num/10;
}
printf("Sum of digits of number is %d",s);
return 0;
}
