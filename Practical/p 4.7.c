int main()
{
    int sum=0,i;
    for(i=101;i<200;i++)
    {
        if(i%5==0)
        {
            sum=sum+i;
        }
    }
    printf("The sum if %d",sum);
    return 0;
}
