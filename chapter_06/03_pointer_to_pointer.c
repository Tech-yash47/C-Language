 #include<stdio.h>
 
 int main()
 {
    int i=6;
    int* j=&i;
    int** k=&j;

printf("The Value i is %d\n",i);
printf("The Value i is %d\n",*j);
printf("The Value i is %d\n",**k);
printf("The Value i is %d\n",*(&i));
printf("The Value i is %d\n",**(&j));

    return 0;
 }
