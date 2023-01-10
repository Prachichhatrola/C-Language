void swap(int*,int*);
main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    getch();
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
