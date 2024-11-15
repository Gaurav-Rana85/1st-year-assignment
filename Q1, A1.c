#include <stdio.h>
#include <math.h>

int armCheck(int num) {
    int result=0;
    int rem;
    int og = num;
    while (og != 0) {
        
        rem = og % 10;
        
        result += pow(rem,3);
        og /= 10;
        
    }
    if (result == num){
        return printf("%d is an Armstrong number.", num);
    }
    else{
        return printf("%d is not an Armstrong number.", num);
    }
}
int main() {
    int num;
    printf("Enter a Three Digit Integer --> ");
    scanf("%d", &num);
    armCheck(num);
    return 0;
}