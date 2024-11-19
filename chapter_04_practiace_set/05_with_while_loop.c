 #include<stdio.h>
 
 int main()
 {
    int i=9,sum=0;
    while (i)
    {
        sum += i;
        i--;
    }
    printf("%d",sum);
    return 0;
 } // ok