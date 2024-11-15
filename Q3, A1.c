#include <stdio.h>


int main() {
    int num1, num2;
    int sub;
    printf("Enter the First Integer --> ");
    scanf("%d", &num1);
    printf("Enter the Second Integer --> ");
    scanf("%d", &num2);
  
    sub = num1 + ~num2 + 1;

    //~ is a bitwise operator, it flips the bits and in normaa
    // language it turns a number negative after adding 1 to it

    //for example 
    //~2 = -3
    printf("%d-%d = %d",num1,num2,sub);
    return 0;
}