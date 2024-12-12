#include<stdio.h>
int retur(int*j){
    printf("%u\n", j);
    return 9;
};
int main()
{
    int i =8;
    int* j= &i;
    retur(j);
    printf("The adderss of there variable is %u",&i);
    return 0;
}