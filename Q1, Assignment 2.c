#include<stdio.h>

int main() {
    int n;
    printf("How many Students in Class = ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter Marks of Student %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        a[i] = a[i] + 5;
        printf("\n");
    }

    for(int i=0;i<n;i++){
        printf("Updated Marks of Student %d = ",i+1);
        printf("%d \n",a[i]);
    }
}