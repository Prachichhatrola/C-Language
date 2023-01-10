#include<conio.h>
#include<stdio.h>
int add(void);
void main()
{
    int s;

    s=add();
    printf("Sum is %d",s);
    getch();
}
int add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    return (a+b);
}
