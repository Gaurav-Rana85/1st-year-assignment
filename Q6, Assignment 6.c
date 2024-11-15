#include<stdio.h>

int main() {
    int n,i,avg;
    int total=0;
    printf("How many Students in Class = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Marks of Student %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        total += a[i];
    }

    avg = total/n;

    printf("Average marks are %d",avg);

    
}