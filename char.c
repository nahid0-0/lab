#include<stdio.h>

void f(int n, char a[]){
    for(int i = 0; i < n; ++i){
        for(int j = i; j < n; ++j){
            if(a[j] < a[i]){
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char a[n];
    for (int i = 0; i < n; ++i) {
        scanf(" %c", &a[i]);
    }
    f(n, a);
    for (int i = 0; i < n; ++i) {
        printf("%c\n", a[i]);
    }

    return 0;
}
