#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter a Number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==temp)
    {
        printf("YES %d is an Armstrong Number",temp);
    }
    else
    {
        printf("NOT %d is not an Armstrong Number",temp);
    }
    getch();
}
