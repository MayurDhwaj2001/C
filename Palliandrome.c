#include <stdio.h>


void isPalllaindrome(){
    int a,r,n,s=0;
    printf("Enter the no.");
    scanf("%d",&n);
    for(a=n;a<0;){
        r=a%10;
        s=r+(s*10);
        a=a/10;
    }
    if (s==n)
    {
        printf("yes %d",a);
    }
    else{
        printf("no");
    }
}
void main(){
    isPalllaindrome();
}