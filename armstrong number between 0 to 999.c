int main()
{
    int n,r,sum=0,sum1=0,count=0;
    for(int k=1;k<1000;k++)
    {
        n=k;
        for(int j=1;n!=0;j++)
        {
            count++;k
            n=n/10;
        }
        n=k;
        for(int i=0;n!=0;i++)
        {
            r=n%10;
            sum1=pow(r,count);
            sum=sum+sum1;
            n=n/10;
        }
        if(k==sum)
        {
            printf("%d ",sum);
        }
        count=0;
        sum=0;
        sum1=0;
    }
    return 0;
}

