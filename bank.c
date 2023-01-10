
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct bank{

        char name[30],password[30],uname[30],address[30];
        int deposit,number,uid;

}a[5];
int login();
void createAuser();
void displayAuser();
void searchAuser();
void update();
int index=0;
void main(){

        int choice,x,choiceAdmin;
        while(1){
                mainmenu :
                    printf("\n1....Login");
                    printf("\n2....Exit");
                    printf("\nEnter the choice");
                    scanf("%d",&choice);
                    switch(choice){

                         case 1 : x=login();
                                  if(x==1){
                                         while(1){
                                      printf("\n You have succesfully login as admin");
                                      printf("\n1....create user");
                                      printf("\n2....Display user");
                                      printf("\n3....Search");
                                      printf("\n4....Update");
                                      printf("\n5....goto mainmenu");
                                      printf("\n6....exit");
                                      printf("\nEnter your choice");
                                      scanf("%d",&choiceAdmin);
                                      switch(choiceAdmin){
                                                case 1 : createAuser();
                                                         break;
                                                case 2 : displayAuser();
                                                         break;
                                                case 3 : searchAuser();
                                                         break;
                                                case 4 : update();
                                                case 5 : goto mainmenu;
                                                case 6 : exit(0);
                                      }
                                  }
                                }
                                else if(x==2){

                                      printf("\n You have succesfully login as user");
                                      printf("\n1....Check user datails");
                                      printf("\n2....update user name");
                                      printf("\n3....update user address");
                                      printf("\n4....update phone number");
                                      printf("\n5....exit");
                                      printf("\nEnter your choice");
                                      scanf("%d",&choice);

                                  }
                                else{
                                        printf("\n User name Or Passoword is Wrong");
                                }
                                break;
                         case 2 : exit(0);
                    }
        }
}

int login(){
           char uname[30],password[30];
           printf("\nEnter the user name :");
           scanf("%s",uname);
           printf("\nEnter the password : ");
           scanf("%s",password);
           if(strcmp(uname,"admin")==0 && strcmp(password,"admin")==0){
                    return 1;
           }else if(strcmp(uname,"user")==0 && strcmp(password,"user")==0){
                   return 2;
           }else{
                   return 0;
           }
}
void createAuser(){

            printf("\n Enter the uid ");
            scanf("%d",&a[index].uid);
            printf("\n Enter the name ");
            scanf("%s",&a[index].name);
            printf("\n Enter the user name ");
            scanf("%s",&a[index].uname);
            printf("\n Enter the password ");
            scanf("%s",&a[index].password);
            printf("\n Enter the mobile number ");
            scanf("%d",&a[index].number);
            index++;
}
void displayAuser(){

        int i;
        for(i=0;i<index;i++){
                printf("%d\t%s\t%s\t%d\t%s",a[i].uid,a[i].name,a[i].uname,a[i].number,a[i].password);
        }
}
void searchAuser(){
        int flag=0,id,i;
        printf("\n Enter the id which you want to search the data");
        scanf("%d",&id);
        for(i=0;i<index;i++){
                if(a[i].uid==id){
                          flag=index;
                          break;
                }else{
                        continue;
                }
        }
      if(flag==0){
              printf("\n NO DATA FOUND ");
      }else{
                printf("%d\t%s\t%s\t%d\t%s",a[i].uid,a[i].name,a[i].uname,a[i].number,a[i].password);
      }
}
void update(){

        int flag=0,i,id,Nnumber;
        char Nname[30],Npassword[30];
        printf("\n Enter the id which you want to update");
        scanf("%d",&id);
        for(i=0;i<index;i++){
                if(a[i].uid==id){
                        flag=i;
                        break;
                }else{
                        continue;
                }
        }
        if(flag==0){
                printf("\n DATA NOT FOUND ");
        }
        else{
                printf("\n Enter the New value of User name");
                fflush(stdin);
                gets(Nname);
                strcpy(a[flag].uname,Nname);
                printf("\n Enter the New value of password");
                fflush(stdin);
                gets(Npassword);
                strcpy(a[flag].password,Npassword);
                printf("\n Enter the New value of Mobile Number");
                fflush(stdin);
                gets(Nnumber);
                strcpy(a[flag].number,Nnumber);

        }

}
