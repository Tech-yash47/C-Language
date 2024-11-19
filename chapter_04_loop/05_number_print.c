 #include<stdio.h>
 
 int main()
 {
    int input,i=1;
    printf("Enter any input :");
    scanf("%d",&input);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=input);
    
    return 0;
 }