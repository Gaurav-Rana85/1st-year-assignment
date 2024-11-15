#include<stdio.h>

int main() {
    int n,i;
    int count=0;
    printf("How many Students in Class = ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter Marks of Student %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i] == 99){
            printf("Student %d scored 99\n",i+1);
            count++;
        }
        else{
            continue;
        }
    }
    if(count == 0){
        printf("\nNobody scored 99 marks");
    }
    else{
        printf("\n%d Students scored 99 marks",count);
    }
    


}