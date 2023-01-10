main()
{
    add();
    iseven();
    getch();
}

add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}

iseven()
{
    int a;
    printf("Enter a number");
    scanf("%d,&a");
    if(a%2==0)
    {
      printf("Even");
    }
    else
    {
      printf("Odd");
    }
}
