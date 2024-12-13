#include<stdio.h>
void main()
{
int rev,rem,n;
printf("enter the n value");
scanf("%d",&n);
while(n>0)
{
    rev=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("rev of digits of given number is %d",rev);
}
