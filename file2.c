int main()
{
    FILE *fp;
    fp=fopen("myfile.dat","a+");
    if(fp==NULL)
        printf("file not found");
}
