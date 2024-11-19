 #include<stdio.h>
 
 int main()

 {
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age<10){ printf("you are child");}
    else if(10<age,age<18)
    { printf("you are theenager");}
    else if(18<age,age<27)
    { printf("you are young");}
    else
    { printf("you are old");}
    return 0;
 }