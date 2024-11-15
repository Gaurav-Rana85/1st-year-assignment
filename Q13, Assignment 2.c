#include<stdio.h>
int main() {
    int n,i;
    printf("How many terms in array = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Term %d = ",i+1);
        scanf("%d",&a[i]);
    }

    int b[n];
    b[0] = a[n-1];

    for(i=0;i<n-1;i++){
        b[i+1] = a[i];
    }

    for(i=0;i<n;i++){
        a[i] = b[i];
    }

    

    for(i=0;i<n;i++){
        printf("  %d  ",a[i]);
    }
}