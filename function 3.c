//take something return nothing//
#include<conio.h>
#include<stdio.h>
void add(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);

    add(x,y);   //Actual arguments   ; call by value
    getch();

}
void add(int x,int y)    //Formal arguments
{
    int c;
    c=x+y;
    printf("%d%d",c);
}

