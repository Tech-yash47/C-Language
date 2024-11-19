 #include<stdio.h>
 
 int main()
 {
    int m;
    char Grade;
    printf("Enter Your Marks:");
    scanf("%d",&m);
    if(m<=100&&m>=90){Grade ='A';}
    else if(m<=90&&m>=80){Grade ='B';}
    else if(m<=80&&m>=70){Grade ='C';}
    else if(m<=70&&m>=60){Grade ='D';}
    else if(m<=60&&m>=50){Grade ='E';}
    else if(m<=50&&m>=0){Grade ='f';}
    printf("you grade is %c",Grade);
    return 0;
 }