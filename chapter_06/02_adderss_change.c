#include<stdio.h>

int main()
{
    int i= 32;
    int * j=&i;//intregera pointer 
    int k=54;
    printf("the address of i is %p\n",&i);
    printf("the address of j is %p\n",&j);
    printf("the address of k is %p\n",&k);    

    printf("the value of j is %d",*(&i));
    return 0;
}
