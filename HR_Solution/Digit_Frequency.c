#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,a[9]={0};
    char *s;
    s=(char *)malloc(1000*sizeof(char));
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            a[s[i]-48]++;
        }
    }
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    free(s);
     
    return 0;
}
