//take nothing Returns nothing
#include<conio.h>
#include<stdio.h>
void main()
{
    void add(void);
    add();
    getch();
}
void add()
{
    int a,b,c;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d" ,c);
}
