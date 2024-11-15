#include<stdio.h>

int main() {
    int n,total=0,i;
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

    printf("Total marks are %d",total);

    
}