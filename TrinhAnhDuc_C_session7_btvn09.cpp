#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);

    int found = 0;
    for (int a = 0; a * a * a <= n; a++) {
        for (int b = 0; b * b * b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
                found = 1;
            }
        }
    }

    if (!found)
        printf("Khong co cap nao thoa man.\n");

    return 0;
}

