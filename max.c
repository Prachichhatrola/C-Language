main()
{
    int x,y,max;
    printf("Enter two numbers");
    scanf("%d %d" ,&x,&y);
    max=x>y ?x:y;
    printf("Greater number is %d",max);
    getch();
}
