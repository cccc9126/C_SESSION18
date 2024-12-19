#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user01 ={"Nguyen Quang Huy", 18,"028453742654"};
    printf("Name : %s\n",user01.name);
    printf("Age : %d\n",user01.age);
    printf("PhoneNumber : %s\n",user01.phoneNumber);
    return 0;
}
