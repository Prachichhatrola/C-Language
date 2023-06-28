int main()
{
    int n1,n2,n3;
    printf("Enter the number n1:\n");
    scanf("%d",&n1);
    printf("Enter the number n2:\n");
    scanf("%d",&n2);
    printf("Enter the number n3:\n");
    scanf("%d",&n3);
    if(n1<n2)
    {
        if(n2<n3)
        {
            printf("%d is maximum",n3);
        }
        else
        {
            printf("%d is maximum",n2);
        }
    }
    else if(n1<n3)
    {
        printf("%d is maximum",n3);
    }
    else if(n1>n2||n1>n3)
    {
        printf("%d is maximum",n1);
    }
    else
    {
        printf("All number are equal");
    }
    return 0;
}
