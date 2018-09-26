#include<stdio.h>

int factorial(int fact){
    if(fact==1)return 1;
    else return fact*factorial(fact-1);
}

int main(){
    printf("Enter a number :\n");
    int num;
    scanf("%d",&num);
    printf("%d",factorial(num));

    return 0;
}

