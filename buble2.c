#include<stdio.h>


void buble(int n, int a[]){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(a[j] < a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    buble(n, a);
    for(int i = 0; i < n; ++i){
        printf("%d \n", a[i]);
    }
    return 0;
}
