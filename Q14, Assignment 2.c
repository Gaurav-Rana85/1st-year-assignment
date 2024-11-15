#include<stdio.h>
int main() {
    int n,i,j;
    int count=0,flag=0;
    printf("How many terms in array = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Term %d = ",i+1);
        scanf("%d",&a[i]);
    }

    int b[n];
    for(i=0;i<n;i++){
        b[i] = a[i];
    }
    printf("The Repeated terms are :  ");
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            flag++;
            if(a[i] == b[j+1]){
                printf("%d",a[i]);
            }
            else{
                count++;
            }
        }
    }
    if(count == flag){
        printf("-1");
    }
}