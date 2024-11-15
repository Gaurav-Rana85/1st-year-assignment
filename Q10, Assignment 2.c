#include<stdio.h>


int prime(int a) {
    int i,count;

    if(a==1 || a==0){
        return printf("\n%d is nor a prime nor composite number",a);
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            return printf("\n%d is not a prime number",a);
            break;
        }
        else{
            count++;
        }
    }
    return printf("\n%d is a prime number",a);
    
}

int main() {
    int n,i;
    printf("How Many numbers in array = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Number %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        prime(a[i]);
    }


}