#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main()
{
    int n1,n2,n3,n4;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    int t1,t2,largest;
    t1=(n1>n2?n1:n2);
    t2=(n3>n4?n3:n4);
    largest=(t1>t2?t1:t2);
    printf("%d",largest);
    return 0;
}
