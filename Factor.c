#include <stdio.h>
#include <conio.h>

void fun(int i){
    for(int j=1;j<=i;j++){
        if (i%j==0)
        {
            printf("%d ",j);
        }
    }
    getch();
}

void main(){
    int n;
    // clrscr();
    printf("Enter Any Number ");
    scanf("%d",&n);
    fun(n);
}