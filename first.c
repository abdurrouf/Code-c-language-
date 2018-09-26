#include<stdio.h>

int main(){
    int i;
    int count=0;
    for(i=30;i<1000;i=i+30){
        if(i%16!=0){
            count++;

        }
        else{
            printf("%d\n",i);
        }
    }

    printf("%d\n",count);
    return 0;
}
