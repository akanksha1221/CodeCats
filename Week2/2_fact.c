#include <stdio.h>

int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of %d is: %d",n,f);
}