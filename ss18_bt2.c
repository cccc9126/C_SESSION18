#include <stdio.h>
#include "string.h"

int main(int argc, const char * argv[]) {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user01;
    printf("Please input your name : ");
    fgets(user01.name, 50, stdin);
    user01.name[strcspn(user01.name, "\n")] = '\0';
    printf("Please input your age : ");
    scanf("%d",&user01.age);
    fflush(stdin);
    printf("Please input your phone number : ");
    fgets(user01.phoneNumber, 50, stdin);
    user01.name[strcspn(user01.name, "\n")] = '\0';
    printf("Name : %s\n",user01.name);
    printf("Age : %d\n",user01.age);
    printf("PhoneNumber : %s\n",user01.phoneNumber);
    return 0;
}
