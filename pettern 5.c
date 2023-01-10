int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
            if(i+j>=6&&j<=i+4)
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
