#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; ++i){
        int x = i;
        for(int j = i + 1; j < n; ++j){
            if(a[x] > a[j]) x = j;
        }
        int temp;
        temp = a[x];
        a[x] = a[i];
        a[i] = temp;
    }
    for(int i = 0; i < n; ++i) printf("%d \n", a[i]);
}
