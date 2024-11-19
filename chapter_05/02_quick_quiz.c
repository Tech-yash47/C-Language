 #include<stdio.h>
 int statment(int);
 int main()
 {
    statment(1);
    statment(2);
    statment(3);

    return 0;
 }
 int statment(int a){
     switch (a)
     {
     case 1:
       printf("Good morning!\n");
        break;
     
     case 2: printf("good afternoon\n");
        break;
    
    case 3: printf("good night\n");
     }

    
 }