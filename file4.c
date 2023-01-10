#include<stdio.h>
main()
{
    FILE *fp;
    int a,b;
    fp=fopen("f1.txt","w");
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    fprintf(fp,"sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}
