 #include<stdio.h>
 
 int main()
 {
    int age;
    printf("Enter your age :\n");
    scanf("%d",&age);
    if(age>70){printf("sir you very aged for drive");}
    else if(age>60){printf("You can drive and you are a senior setigion");}
    else if(age>40){printf("you can drive and yo are elder");}
    else if (age>18){printf("you can drive");}
    else{printf("you can't drive");}
    return 0;
 }