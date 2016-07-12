#include <stdio.h>

void main(){
    int num;

    printf("Enter a number to check if it is odd or even: ");
    scanf("%d", &num);

    if(num%2==0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}
