#include<stdio.h>
#include<math.h>
void main()
{
int n,rem,sum=0,temp;
printf("enter the n value");
scanf("%d",&n);
temp=n;
while(n>0)
{
    rem=n%10;
    sum=sum+pow(rem,3);
    n=n/10;
}
if(sum==temp)
{
   printf("the given number is %d armstrong",sum);
}
else
{
printf("the given number is %d not armstrong",sum);
}
}
