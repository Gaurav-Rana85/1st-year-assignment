#include<stdio.h>

int main() {
    int n,ins,term,i;
    printf("How many Numbers in Array = ");
    scanf("%d",&n);
    int a[n],b[n-1];

    for(int i=0;i<n;i++){
        printf("Enter Term %d in Array = ",i+1);
        scanf("%d",&a[i]);
    }


    printf("\nEnter Term to be Deleted = ");
    scanf("%d",&term);

    if(term>n || term<0){
        printf("Invalid Input");
    }
    else{
        for(i=0;i<term-1;i++){
            b[i] = a[i];
        }
        for(i=term-1;i<n;i++){
            b[i] = a[i+1];
        }
    }

    
    printf("Updated Array: {");
    for(i=0;i<n-1;i++){
        printf("  %d  ",b[i]);
    }
    printf(" }");
}