#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n>=1 && n<=9){
        printf("%s",a[n-1]);
    }
    else{
        printf("Greater than 9");
    }
    return 0;
}
