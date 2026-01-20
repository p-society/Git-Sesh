#include<stdio.h>
int add(int a, int b){
    int sum=a+b;
    printf("sum is :%d",sum);
}
int main(){
    int a,b;
   printf("enter two numbers");
   scanf("%d %d",&a,&b); 
   add(a,b);
    return 0;
}