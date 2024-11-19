 #include<stdio.h>
 
 int main()
 {
    int G;
    printf("Enter Your Marks:");
    scanf("%d",&G);
    printf("Your Grade is:");
    if(100<G,G>90){
        printf("A"); }
    else if (90<G,G>80){
        printf("B");}
     else if (80<G,G>70){
        printf("c");}
     else if (70<G,G>60){
        printf("D");}
     else if (60<G,G>50){
        printf("E");}
      else {
        printf("F");}
               
    return 0;
 }