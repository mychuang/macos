//
//  main.c
//  c_test
//
//  Created by Miller on 2021/2/5.
//

#include <stdio.h>
#include <iso646.h>

int stair(int);
int f(int);

int main(){
    int n;
    for(n=0; n <= 45; n++){
        printf("stair n = %d ", n);
        printf("method = %d \n", stair(n));
    }
    return 0;
}

int stair(int n){
    if(n == 0){
       return 0;
    }
    if(n == 1){
       return 1;
    }else if(n == 2){
       return 2;
    }else if(n >= 3){
       return stair(n-1)+stair(n-2);
           
    }
}


