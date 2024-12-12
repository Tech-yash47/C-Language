#include<stdio.h>
 
int malti(int* x){*x=*x *10;  }

int main()
{
    int x=10;
    malti(&x);
    printf("%d",x);
    
    return 0;
}