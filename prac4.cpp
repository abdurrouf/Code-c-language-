#include <stdio.h>
#include<math.h>

int bitsRequired(int a, int b) {
    int r = 0;
    for (int c = a ^ b; c != 0; c = c >> 1) r += c & 1;
    return r;
}

int main()
{
    int n1,n2,sum=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    //printf("%d",bitsRequired(n1,n2));
    printf("%d",n1^n2);
    return 0;
}
