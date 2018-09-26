#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    int length=strlen(arr);
    printf("%s\n",strrev(arr));
    int flag=1;
    int i=0,j=length-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            flag=0;
            break;
        }
        i++;
        j--;
    }
    printf("%d",flag);

}
