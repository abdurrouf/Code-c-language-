#include<stdio.h>

int pCheck(int num){
    int revNum=0,origin=num,remainder=0;
    while(num!=0){
        remainder=num%10;
        revNum=revNum*10+remainder;
        num=num/10;
    }
    printf("%d    %d\n",revNum,origin);
    if(revNum==origin)return 1;
    else return 0;
}
void printOneToFive(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++)printf(" ");
        for(j=1;j<=i;j++)printf("%d",i);
        printf("\n");
    }
}

int countADO(char arr[]){
    int i=0,A=0,D=0,O=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        if((arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='a'&&arr[i]<='z'))A++;
        else if(arr[i]>='0'&&arr[i]<='9')D++;
        else O++;
        i++;
    }
    printf("\n\n%d\n",A);
    printf("%d\n",D);
    printf("%d\n",O);
    return 0;
}

void onlyPrintEven(int arr[]){
    int i=0;
    for(i=0;i<sizeof(arr);i++){
        if(arr[i]%2==0)printf("%d ",arr[i]);

    }
}

int main(){

    char arr[100];
    gets(arr);
    countADO(arr);

    return 0;
}
