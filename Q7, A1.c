
#include <stdio.h> 
#include<math.h>
int decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int binaryToDecimal(int n) 
{ 
	int num = n; 
	int dec = 0;
	int power = 1; 

	int temp = num; 
	// Extracting the last digit of the binary number 
	while (temp>0) { 
		int last_digit = temp % 10; 

		temp = temp / 10; 
		dec += last_digit * power; 
		power = power * 2; 
	} 

	// Returning the decimal value 
	return printf("%d",dec); 
} 

// Driver program 
int main() 
{ 
	int num;

    printf("Enter Number to be converted = ");
    scanf("%d",&num);
    int choice;
    printf("Enter 1 for Binary to Decimal\n");
    printf("Enter 2 for Decimal to Binary\n");
    scanf("%d",&choice);

    switch(choice){

        case 1:
	    binaryToDecimal(num);
        break;
        case 2:
        decimalToBinary(num);
        break;
        default:
        printf("Please Give a valid Input");
        break;
    }
}
