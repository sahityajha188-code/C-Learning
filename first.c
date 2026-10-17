#include <stdio.h>
#include <math.h>

void swap(int *a, int*b){
    int temp = *a;
*a = *b;
*b = temp;

}

int main(){
  
int a[10] = {1,2,0,4,5,0,6,0,7,11};


for (int i = 0, j=0 ; i<5, j<10; i++, j++){
    if (i  )
    int temp = a[i];
    a[i]=a[9-i];
    a[9-i]=temp;
    
    printf("%d \t", a[j]);

    
}
}