#include<stdio.h>
int square(int);
int main(){
    int n;
    printf("enter a number:  ");
    scanf("%d",&n);
    square(n);
    return 0;
}
int square(int n){
    int sq=n*n;
    printf("square of %d is %d\n",n,sq);
    return 0;
}