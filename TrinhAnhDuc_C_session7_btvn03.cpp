#include <stdio.h>

int main() {
    int n, temp, dao = 0, chuSo;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        chuSo = temp % 10;       // L?y ch? s? cu?i
        dao = dao * 10 + chuSo;  // Xây d?ng s? d?o ngu?c
        temp /= 10;              // B? ch? s? cu?i
    }

    if (dao == n)
        printf("%d la so doi xung.\n", n);
    else
        printf("%d khong phai la so doi xung.\n", n);

    return 0;
}

