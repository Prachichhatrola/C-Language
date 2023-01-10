int main()
{
    int i,j,k=0,rows,n;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        i<=n?k++:k--;

        for(j=1;j<=rows;j++)
            if(j>=n+1-k&&j<=n-1+k)
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
