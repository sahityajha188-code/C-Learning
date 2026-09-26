#include <stdio.h>
#include <math.h>

int main(){
    int a[2][10];
    for(int i=1 ; i<=10; i++){
        a[0][i-1] = 2*i;
        a[1][i-1] = 3*i;
        printf("%d \t %d \n", a[0][i-1] , a[1][i-1] );
    }

}