#include<stdio.h>

int main() {
    int n,i,avg;
    int total=0;
    printf("How many Numbers in Array = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Number %d = ",i+1);
        scanf("%d",&a[i]);
    }

    int max = a[0];
    int min = a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        else if(a[i]<min){
            min = a[i];
        }
    }

    printf("\nThe Maximum term is %d and the Minimum term is %d",max,min);

    
}