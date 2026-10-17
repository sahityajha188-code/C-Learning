#include <stdio.h>

int main(){
    int n, max2;
    printf("enter number of elements in array \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n ; i++){
        scanf("%d", &a[i]);
   }
   
   for(int j =0; j<n; j++){
    int count=0;
        for (int k=0 ; k<n; k++){
            if (a[j]>a[k])
            count++;
        }
        if (count == n-2)
        max2 = a[j];
   }

   printf("2nd maximum is %d", max2);
}