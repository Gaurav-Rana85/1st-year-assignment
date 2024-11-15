#include<stdio.h>

int main() {
    int n,i,max;
    printf("How many Numbers in Array = ");
    scanf("%d",&n);
    int a[n];
    int count,peak=0;

    for(i=0;i<n;i++){
        printf("Enter Number %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(i==0 || i== n-1){
            continue;
        }
        else{
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                printf("\n%d is a Peak element",a[i]);
                if(a[i]>peak){
                    peak=a[i];
                }
            }
            else{
                count++;
            }
        }
    }
    if(count==n-1){
        printf("There are no peak elements");
    }
    else{
        printf("\n\n%d is the Biggest Peak Element",peak);
    }

    
}