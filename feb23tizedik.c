#include <stdio.h>

int my_abs(int n){
    if(n>=0){
        return n;
    }
    else{
        return -1*n;
    }

}




int main(){
int n=-5;
printf("Az n erteke %d\n",n);
printf("Az n abszolut erteke: %d\n",my_abs(n));

return 0;

}