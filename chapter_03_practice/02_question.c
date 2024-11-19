 #include<stdio.h>
 
 int main()
 {
    int mark1,mark2,mark3;
     printf("Enter mark1 : "); 
     scanf("%d",&mark1);      
     printf("Enter mark2 : ");
     scanf("%d",&mark2);    
     printf("Enter mark3 : ");
     scanf("%d",&mark3);
     (mark1<33||mark2<33||mark3<33||((mark1+mark2+mark3)/3)<44)?printf("You are fall by less marks in subject") :  printf("\t\2 YOU ARE PASS  \2");
     //this is ternary  >>>>>   condision? if pass then write this side : if false then write this side 
     //   or,                                                           
     //     if (mark1<33||mark2<33||mark3<33) 
     //                    printf("you are fall due to less marks in induviswal subject");                                                         
     //     else if (mark1+mark2+mark3)/3)<44) 
     //                     printf("you are fall due to less marks in total subject");                                                      
     //     else printf
     //     ("you are pass");                                                         
     //                                                                                                                              
    return 0;
 }