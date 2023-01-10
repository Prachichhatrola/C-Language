
int main()
{
    int month,days;
    printf("Enter the days:\n");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("month,days=%d,%d\n",month,days);
    return 0;
}
