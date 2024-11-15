#include <stdio.h>


int perfect(int num){
    int result;
    int count = 0;

    for(int i=1;i<num;i++){
        if(num%i == 0){
            count += i;
        }
        
    }
    
    if (count == num){
        printf("%d is a perfect Number",num);
    }
    else{
        printf("%d is not a perfect Number",num);
    }
}

int main() {
    int num;
    
    printf("Enter the Integer--> ");
    scanf("%d", &num);

    perfect(num);


}