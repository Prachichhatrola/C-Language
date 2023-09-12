#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Prachi Chhatrola");
    printf("210210116030");
    long n,i,sum=0;
    printf("Enter n: \n");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%ld",sum);
    getch();
}
