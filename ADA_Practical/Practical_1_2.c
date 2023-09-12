#include<stdio.h>
#include<conio.h>
int main()
{

    long n,i,sum=0;
    printf("Prachi Chhatrola");
    printf("210210116030");
    printf("Enter n: \n");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        sum=n*(n+1)/2;
    }
    printf("sum=%ld",sum);
    getch();
}
