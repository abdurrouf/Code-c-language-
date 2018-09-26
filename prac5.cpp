#include<stdio.h>
int sum(int val){

        static int myResult=0;

        myResult += val;

       return myResult;

        }

      int main(){

            int i, value;

            for(i=1;i<10;i++)

             value=sum(i);

           printf("%d",value);

          }
