#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[50], B[50];
    int i, identik = 1;
    
    scanf("%s", A);
    
    scanf("%s", B);
    
    if(strlen(A) != strlen(B)){
        printf("BERBEDA");
    } else{
        for(i = 0; i < strlen(A); i++){
            if(A[i] != B[i]){
                identik = 0;
                break;
            }
        }
        if(identik){
            printf("IDENTIK");
        }else{
            printf("MIRIP");
        }
    }
        
    return 0;
}