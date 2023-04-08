int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("the number is prime");
            break;
        }
        else
        {
            printf("the number is not prime");
            break;
        }
    }
    return 0;
}
