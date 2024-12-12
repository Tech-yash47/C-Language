 #include<stdio.h>

 int sum(int*,int*);

 int sum(int* a,int* b)
 {  *a=6;
    return *a + *b;}
// fungtion change the value of X
 int main()
 {
    int x=1,y=5;
    printf("The sum of X ,Y  is %d\n",sum(&x,&y));
    printf("the value of X is %d",x);
    return 0;
 }