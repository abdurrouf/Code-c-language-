#include<stdio.h>
#include<string.h>
int fib(int n){
    if(n==0|| n==1)return n;
    else{
        int a=fib(n-2)+fib(n-1);
        return a;
    }
}
int fact(int n){
    if(n==0)return 1;
    else if(n==1)return n;
    else return n*fact(n-1);
}
int pCheck(char arr[]){
    int i=0,counter=0,length=0;
    while(arr[i]!='\0'){
        length++;
        i++;
    }
    printf("%d",length);
    i=0;
    while(arr[i]!='\0'){
        if(arr[i]!=arr[length-i-1])counter++;
        i++;
    }
    printf("%d",counter);
    if(counter>0){
        printf("Not palindrome");
        return 0;
    }
    else {
        printf("Palindrome");
        return 1;
    }
}
int main(){
    int arr[5],i,j,temp=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before  ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    printf("After  ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
