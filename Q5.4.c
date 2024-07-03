#include <stdio.h>

int main() {
    int n, i;
    
    printf("Nhap n: ");
    scanf("%d", &n);

    int array[n];

    printf("Nhap vao so nguyen %d: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("OUTPUT:\n");
    printf("So le:\n");
    for (i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    printf("So chan:\n");
    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}