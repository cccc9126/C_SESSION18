#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user[67];
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
        int index;
    
    printf("Input index you want to add : ");
    scanf("%d",&index);
    
    for(int i=5;i>index;i--){
        strcpy(user[i].name, user[i-1].name);
        user[i].age=user[i-1].age;
        strcpy(user[i].phoneNumber, user[i-1].phoneNumber);
    }
    printf("Please input student%d's information : \n",index+1);
    printf("Input the name : ");
    getchar();
    fgets(user[index].name, 50, stdin);
    user[index].name[strcspn(user[index].name,"\n")]='\0';
    printf("Input the age : ");
    scanf("%d",&user[index].age);
    fflush(stdin);
    printf("Input the phone number : ");
    fgets(user[index].phoneNumber, 50, stdin);
    user[index].phoneNumber[strcspn(user[index].phoneNumber,"\n")]='\0';
    for(int i = 0;i<6;i++){
        printf("ID : %d\n",i+1);
        printf("Name of student%d : %s\n",i+1,user[i].name);
        printf("Age of student%d : %d\n",i+1,user[i].age);
        printf("Phone number of student%d : %s\n",i+1,user[i].phoneNumber);
        printf("\n");
    }
    return 0;
}



