#include <stdio.h>
#include <conio.h>

void fun(int x, int y){
    if (x<y)
    {
        printf("Greatest no is %d",y);
    }
    else if(y<x)
    {
        printf("Greatest no is %d",x);
    }
    else
    {
        printf("Both are equal");
    }    
}

void main(){
    int n, m;
    // clrscr();
    printf("Enter 2 Numbers");
    scanf("%d%d", &n, &m);
    fun(n,m);
}