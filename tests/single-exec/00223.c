
#include <stdio.h>


int recursive(int n){
    if (n <= 0) return 0;
    printf("Before call: %d\n", n); 
    int c = recursive(n - 1); 
    printf("After call: %d\n", c); 
    return c + 10;
}

int main(int argc, char** argv){
    printf("\n-------------------------\n\n"); 
    recursive(254); 
}