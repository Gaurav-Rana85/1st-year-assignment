#include<stdio.h>

int main() {
    int n,i,avg;
    int total=0;
    printf("How many Scores in Array = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Score of Term %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2 == 0){
            printf("\nScore %d is even",i+1);
        }
        else{
            printf("\nScore %d is odd",i+1);
        }
    }

    
}