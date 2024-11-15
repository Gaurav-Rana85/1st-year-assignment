#include <stdio.h>


int coords(int x,int y){
    printf("(%d,%d) ",x,y);
    if(x>0){
        if(y>0){
            return printf("Lies in First Quadrant");
        }
        else if(y<0){
            return printf("Lies in Second Quadrant");
        }
        else{
            return printf("Lies on the Positive X-axis");
        }
    }
    else if(x<0){
        if(y>0){
            return printf("Lies in Fourth Quadrant");
        }
        else if(y<0){
            return printf("Lies in Third Quadrant");
        }
        else{
            return printf("Lies on the Negative X-axis");
        }
    }
    else{
        if(y>0){
            return printf("Lies on the Positive Y-axis");
        }
        else if(y<0){
            return printf("Lies on the Positive Y-axis");
        }
        else{
            return printf("Lies on the Origin");
        }

    }
    

}

int main() {
    int x,y;
    
    printf("Enter the X-Coordinate =  ");
    scanf("%d", &x);

    printf("Enter the Y-Coordinate =  ");
    scanf("%d", &y);

    coords(x,y);


}