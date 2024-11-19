 #include<stdio.h>
 
 int main()
 {
    int i=1,sum=0;
    do
    {
       // printf("%d\n",i);
        sum +=i;
        i++;
    } while (i<=9);
    printf("the sum of natural number :%d",sum);
    return 0;
 }