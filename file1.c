
int main()
{
    int i;
    FILE *fp;
    char s[]="Hello Students";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s(i),fp);
    fclose(fp);
    getch();
}
