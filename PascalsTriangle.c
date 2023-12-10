//     1        .
//    1 1       .
//   1 2 1      .
//  1 3 3 1     .
// 1 4 6 4 1    .
//1 5 10 10 5 1 .

// C program to print Pascal’s Triangle 
// using combinations in O(n^2) time 
// and O(1) extra space function 

#include <stdio.h> 
#include <conio.h> 
void printPascal(int n) 
{ 
	for (int line = 1; line <= n; line++) { 
		for (int space = 1; space <= n - line; space++) 
			printf(" "); 
		int c = 1; 
		for (int i = 1; i <= line; i++) { 
			printf(" %d", c); 
			c = c * (line - i) / i;     //  <------ Main formula
		} 
		printf("\n"); 
	} 
} 

int main() 
{ 
	int n;
    printf("Enter No Of Rows\n");
    scanf("%d",&n); 
	printPascal(n);
    getch(); 
}
