#include<stdio.h>
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
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }


    printf("After  ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
