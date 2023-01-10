struct date
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
};
void main()
{
    struct date d1={22,1,2016};
    printf("size of d1 is %d",sizeof(d1));
}
