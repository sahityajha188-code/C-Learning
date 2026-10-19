#include <stdio.h>

int main(){
    int n;
    printf("enter a number in array \n");
    scanf("%d", &n);
    int a[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }

    int num;
    printf("rotation : \n");
    scanf("%d", &num);

    for (int j=1; j<=num ; j++){
        int temp;
        for(int k=0 ;k<n-1;k++){
            if(k==0)
            temp = a[0];
            a[k] = a[k+1];
            if(k==n-2)
            a[n-1] = temp;
        }
    }

    for(int l = 0; l<n; l++){
        printf("%d \t" , a[l]);
    }
}