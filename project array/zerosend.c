#include <stdio.h>

int main(){
    int n;
    printf("enter a number in array \n");
    scanf("%d", &n);
    int a[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }

    
        int count = 0;
        for (int j=0;j<n;j++){
            if (a[j] == 0 && count == 0)
            count++;
            if (a[j+count] < n)
            a[j] = a[j+count];
        }
    
    for (int k= count+1; k<n ; k++){
        a[k]=0;
    }

    for(int l=0; l<n ; l++){
        printf("%d\t" , a[l]);
    }
    
}