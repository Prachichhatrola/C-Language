int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            if(i<=j)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
