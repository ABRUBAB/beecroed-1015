#include <stdio.h>
 
int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (B > C && D > A && C > 0 && D > 0 && (C + D) > (A + B) && A % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
