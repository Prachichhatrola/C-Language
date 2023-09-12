#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;
}
void main()
{
    printf("Prachi Chhatrola");
    printf("210210116030");
    long n,x;
    printf("Enter n: ");
    scanf("%ld", &n);
    x=sum(n);
    printf("sum=%ld",x);
    getch();
}
