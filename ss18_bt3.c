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
    for(int i = 0;i<5;i++){
        printf("Name of student%d : %s\n",i+1,user[i].name);
        printf("Age of student%d : %d\n",i+1,user[i].age);
        printf("Phone number of student%d : %s\n",i+1,user[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
