#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long angka, i, bukti = 0;
    
    scanf("%lld", &angka);
    
    if (angka <= 1) {
        printf("BUKAN\n");
            return 0;
    }
    for(i = 2; i <= angka / 2; i++){
        if(angka % i == 0){
            bukti = 1;
                break;
        }
    }
    
    if(bukti == 0){
        printf("PRIMA");
    }else{
        printf("BUKAN");
    }
    return 0;
}