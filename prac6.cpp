#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    /*
    char str1[100],str2[100];
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)==0)printf("Palindrome\n");
    else printf("Not palindrome\n");

    */
    FILE *fp;
    fp=fopen("test.txt","w");
    char c;
    c=getchar();
    while(c!='#'){
        fputc(c,fp);
        c=getchar();
    }
    fclose(fp);



    return 0;
}
