#include <stdio.h>


int usingThird(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    return printf("New : a=%d, b=%d\n",a,b);
}

int addOrSub(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    return printf("New : a=%d, b=%d\n",a,b);

}

int mulOrDiv(int a,int b){

    
    a=a*b;
    b=a/b;
    a=a/b;
    return printf("New : a=%d, b=%d\n",a,b);

}

int bitwiseOp(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    return printf("New : a=%d, b=%d\n",a,b);
}


int main() {
    int num1, num2;
    int choice;
    printf("Enter the First Integer for Swap--> ");
    scanf("%d", &num1);
    printf("Enter the Second Integer for Swap--> ");
    scanf("%d", &num2);



    printf("Which Method to Use: \n\n");


    printf("Enter 1 for Swapping Two Numbers Using a Temporary Variable\n");
    printf("Enter 2 for Swapping Two Numbers Using Arithmetic Operators + and –\n");
    printf("Enter 3 for Swapping Two Numbers Using Arithmetic Operators x and /\n");
    printf("Enter 4 for Swapping Two Numbers Using Bitwise XOR operator ^\n\n");

    
    //^ works a bit wierd
    // 1001000
    //+1001100
    //---------
    // 0000100

    //if same then 0
    //if different then 1
    scanf("%d", &choice);
    printf("Old : a=%d, b=%d\n",num1,num2);

    switch(choice) {
        case 1:
        usingThird(num1,num2);
        break;
        //
        case 2:
        addOrSub(num1,num2);
        break;
        //
        case 3:
        mulOrDiv(num1,num2);
        break;
        //
        case 4:
        bitwiseOp(num1,num2);
        break;
        default:
        printf("Please Give a valid Input");
        break;
    }

}