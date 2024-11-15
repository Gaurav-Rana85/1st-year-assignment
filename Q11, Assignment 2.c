#include<stdio.h>

int main() {
    int n,ins,term,num,i;
    printf("How many Numbers in Array = ");
    scanf("%d",&n);
    int a[n],b[n+1];

    for(int i=0;i<n;i++){
        printf("Enter Term %d in Array = ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter 1 for Inserting in front\n");
    printf("Enter 2 for Inserting after a term\n");
    printf("Enter 3 for Inserting before a term\n");
    printf("Enter 4 for Inserting at last\n");

    scanf("%d",&num);

    printf("\nEnter Term to be inserted = ");
    scanf("%d",&ins);

    if(num==1) {
        b[0] = ins;
        for(i=0;i<n;i++){
            b[i+1] = a[i];
        }
    }
    else if(num==2) {
        printf("What term to be inserted After = ");
        scanf("%d",&term);

        if(term>=n){
            printf("Invalid Input");
            return 0;
        }
        else{
            for(i=0;i<term;i++){
                b[i] = a[i];
            }
            b[term] = ins;
            for(i=term;i<n;i++){
                b[i+1] = a[i];
            }
        }
    }
    else if(num==3) {
        printf("What term to be inserted Before = ");
        scanf("%d",&term);

        if(term>=n){
            printf("Invalid Input");
            return 0;
        }
        else{
            for(i=0;i<term-1;i++){
                b[i] = a[i];
            }
            b[term-1] = ins;
            for(i=term-1;i<n;i++){
                b[i+1] = a[i];
            }
        }
    }
    else if(num==4) {
        for(i=0;i<n;i++){
            b[i] = a[i];
        }
        b[n] = ins;
    }
    else{
        printf("Invalid Input");
        return 0;
    }

    for(i=0;i<n+1;i++){
        a[i] = b[i];
    }


    printf("Updated Array: {");

    for(i=0;i<n+1;i++){
        printf("  %d  ",a[i]);
    }
    printf(" }");
}