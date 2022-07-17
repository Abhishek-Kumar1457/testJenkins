#include<stdio.h>
#include<stdlib.h>
int fact(int n){
  if(n<=1)
  return 1;
  return n*fact(n-1);
}
int main(){
    int input_number;
    scanf("%d",&input_number);
    printf("%d",fact(input_number));
}
