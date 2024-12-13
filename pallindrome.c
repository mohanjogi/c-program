#include<stdio.h>
void main()
{
int n,rem,rev=0,p;
printf("enter the n value");
scanf("%d",&n);p=n;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(p==rev)
{
    printf("the given number is %d pallindrome");
}
else
{
    printf("the given number is %d pallindrome not");
}
}
