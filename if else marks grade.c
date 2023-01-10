main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if(marks>90)
        printf("Grade-A");
    else if(marks>80)
        printf("Grade-B");
    else if(marks>70)
        printf("Grade-C");
    else
        printf("Grade-D");
    getch();
}
