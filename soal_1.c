#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int angka, i, j, temp;
    
    scanf("%d", &angka);
    
    int arr[angka];
    
        for (i = 0; i < angka; i++) {
            scanf("%d", &arr[i]);
        }
    
    for (i = 0; i < angka-1; i++) {
        for (j = 0; j < angka-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (i = 0; i < angka; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }
    
    return 0;
}