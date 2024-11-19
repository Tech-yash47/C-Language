 #include<stdio.h>
 
 int main()
 {  int year,reminder;
    printf("type your year to check leap year:");
    scanf("%d",&year);
    reminder = year%4;
    switch (reminder)
    {
    case 1:
        printf("\tthis is not leap year");
        break;
    case 2:
        printf("\tthis is not leap year");
        break;
    case 3:
        printf("\t this is not leap year");
        break;    
    default:
        printf("\tThis is leap year");
        break;
    }
    return 0;
 }