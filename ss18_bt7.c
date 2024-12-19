#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user[5];
    for(int i = 0;i<5;i++){
        printf("Please input student%d's information : \n",i+1);
        printf("Input the name : ");
        fgets(user[i].name, 50, stdin);
        user[i].name[strcspn(user[i].name,"\n")]='\0';
        printf("Input the age : ");
        scanf("%d",&user[i].age);
        fflush(stdin);
        printf("Input the phone number : ");
        fgets(user[i].phoneNumber, 50, stdin);
        user[i].phoneNumber[strcspn(user[i].phoneNumber,"\n")]='\0';
    }
    char name[50];
    printf("Input the name of student you want to delete : ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")]='\0';
    int index;
    for(int i=0;i<5;i++){
        if(strcmp(user[i].name,name)==0){
            index = i;
        }
    }
    for(int i=index;i<4;i++){
        strcpy(user[i].name, user[i+1].name);
        user[i].age=user[i+1].age;
        strcpy(user[i].phoneNumber, user[i+1].phoneNumber);
    }
    for(int i = 0;i<4;i++){
        printf("ID : %d\n",i+1);
        printf("Name of student%d : %s\n",i+1,user[i].name);
        printf("Age of student%d : %d\n",i+1,user[i].age);
        printf("Phone number of student%d : %s\n",i+1,user[i].phoneNumber);
        printf("\n");
    }
    return 0;
}


