#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Hàm ki?m tra s? nguyên t?
bool laNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a > b) { // Ð?i ch? n?u a > b
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);
    int coSoNguyenTo = 0;

    for (int i = a; i <= b; i++) {
        if (laNguyenTo(i)) {
            printf("%d ", i);
            coSoNguyenTo = 1;
        }
    }

    if (!coSoNguyenTo)
        printf("Khong co so nguyen to nao trong khoang nay.");

    printf("\n");
    return 0;
}

