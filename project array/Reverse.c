#include <stdio.h> 

int main() {
    int a[10] , n;
    printf("enter number of elements in array \n");
    scanf("%d", &n);
    for(int i=0; i<n ; i++){
        scanf("%d", &a[i]);
   }
   for(int j=0; j<n/2 ; j++){
    int temp = a[j];
    a[j] = a[n-j-1];
    a[n-j-1] = temp;
    
   }
   for (int k=0 ; k<n ; k++){
    printf("%d \t" , a[k]);
   }
   
}