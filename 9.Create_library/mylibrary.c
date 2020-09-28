#include "mylibrary.h"


int square(int x){
    return (x*x);
}

int maxofnum(int x,int y){
    if(x>y)
        return x;
    return y;
}

int fact(int num){
    num-=48;
    int result = 1;

    while(num>0){
        result = result*num;
        num--;
    }
    return result;
}

