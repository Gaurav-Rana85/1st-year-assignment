#include <stdio.h>

int HCF(int a, int b) {
    int c;

    if(a%b == 0){
        return b;
    }
    else if(b%a == 0){
        return a;
    }
    else{
        return HCF(b,a%b);
    }
}
int main() {
    int num1, num2;
    int hcf;
    printf("Enter the First Integer --> ");
    scanf("%d", &num1);
    printf("Enter the Second Integer --> ");
    scanf("%d", &num2);
    hcf = HCF(num1,num2);

    printf("Hcf of %d and %d is %d",num1,num2,hcf);
    return 0;
}