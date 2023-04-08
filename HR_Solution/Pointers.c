#include <stdio.h>

void update(int *a,int *b) {
      int sum;
      unsigned int sub;
       sum=*a+*b;
       if(*a<*b)
       sub=*b-*a;
       else {
       sub=*a-*b;
       }
       *a=sum;
       *b=sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
