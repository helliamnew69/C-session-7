#include <stdio.h>

int main() {
    int m, n;
    
    printf("Nhap chieu dai m: ");
    scanf("%d", &m);
    printf("Nhap chieu rong n: ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Kich thuoc khong hop le!\n");
        return 0;
    }

    for (int i = 1; i <= m; i++) {          // Duy?t t?ng dòng
        for (int j = 1; j <= n; j++) {      // Duy?t t?ng c?t
            printf("* ");
        }
        printf("\n");                       // Xu?ng dòng sau m?i hàng
    }

    return 0;
}


