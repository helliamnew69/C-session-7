#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, soChuSo = 0, tong = 0;
    
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 0;
    }

    temp = n;

    // Ð?m s? ch? s? c?a n
    int dem = n;
    while (dem != 0) {
        soChuSo++;
        dem /= 10;
    }

    // Tính t?ng các luy th?a b?c soChuSo c?a t?ng ch? s?
    dem = n;
    while (dem != 0) {
        int chuSo = dem % 10;
        tong += pow(chuSo, soChuSo);
        dem /= 10;
    }

    // So sánh
    if (tong == n)
        printf("%d la so Armstrong.\n", n);
    else
        printf("%d khong phai la so Armstrong.\n", n);

    return 0;
}

