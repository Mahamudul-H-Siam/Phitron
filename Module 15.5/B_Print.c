#include <stdio.h>

void printAll(int n){
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) printf(" ");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printAll(n);
        printf("\n");
    }
    return 0;
}
