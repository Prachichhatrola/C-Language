int main()
{
    int n,start,end;
    printf("Enter the start and end range");
    scanf("%d%d",&start,&end);
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=start;i<=end;i++)
    {
        if(i%n==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
