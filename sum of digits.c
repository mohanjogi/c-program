#include<stdio.h>
void main()
{
int s=0,rem,n;
printf("enter the n value");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    s=s+rem;
    n=n/10;
}
printf("sum of digits of given number is %d",s);
}
