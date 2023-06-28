int main()
{
    float n1,n2;
    char ch;
    printf("Enter first number:");
    scanf("%f",&n1);
    printf("Enter second number:");
    scanf("%f",&n2);
    printf("Choose operation to perform(+,-,/,*): ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case'+':
        printf("%f",n1+n2);
        break;
    case'-':
        printf("%f",n1-n2);
        break;
    case'*':
        printf("%f",n1*n2);
        break;
    case'/':
        printf("%f",n1/n2);
        break;
    default:
        printf("invalid operation.\n");
    }
    return 0;
}
