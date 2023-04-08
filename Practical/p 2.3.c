int main()
{
    int days,months;
    printf("Enter the days;\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("months,days=%d,%d\n",months,days);
    return 0;
}
