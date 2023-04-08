#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,p=0,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
    
    
}
