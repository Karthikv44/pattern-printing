/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf("  ");
        }
        for(int k=1;k<i*2;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        for(int k=1;k<i*2;k++){
            printf("* ");
        }
        printf("\n");
        for(j=n-i;j>=0;j--){
            printf("  ");
        }
    }
    
    return 0;
}
