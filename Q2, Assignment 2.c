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
        if (a[i]>=75){
            printf("Student %d has Grade A",i+1);
        }
        else if (a[i]>=60 && a[i]<75){
            printf("Student %d has Grade B",i+1);
        }
        else if (a[i]>=40 && a[i]<60){
            printf("Student %d has Grade C",i+1);
        }
        else if (a[i]<40){
            printf("Student %d has Grade D",i+1);
        }
        printf("\n");
    }
}