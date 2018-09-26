#include<stdio.h>
int x=100;
int HCF(int a , int b);
int LCM(int a , int b);
int checkPrime(int n){
    int i,flag=1;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int sumOfTwoPrime(int n){
    int i;
    for(i=2;i<n/2;i++){
        if(checkPrime(i)==1){
            if(checkPrime(n-i)==1){
                printf("%d   %d\n",i,n-i);
                return 1;
            }
        }
    }
    return 0;
}
void changeVal(int val){
    x=val;
}
int main(){

   int a , b,temp;

   scanf("%d%d",&a,&b);
    printf("Before a = %d,  b = %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After a = %d,  b = %d\n",a,b);

    return 0;
}
int LCM(int a , int b){
    return (a*b)/HCF(a,b);
}
int HCF(int a , int b){
    if(a==0 || b==0)return 0;
    else{
        int temp;
        while(b!=0){
            temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
}
