#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
    char st[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    for(i=a; i<=b; i++)
    {
        if(i<=9)
        printf("%s\n",st[i-1]);
        else {
        if(i%2==0)puts("even");
        else puts("odd");
        }
    }
    
  	

    return 0;
}
