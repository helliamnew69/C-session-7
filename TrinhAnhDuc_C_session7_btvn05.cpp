#include <stdio.h>

int main() {
    int n, dao = 0, temp;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        int chuSo = temp % 10;       // L?y ch? s? cu?i
        dao = dao * 10 + chuSo;      // Thêm ch? s? dó vào s? d?o ngu?c
        temp /= 10;                  // B? ch? s? cu?i
    }

    printf("So dao nguoc la: %d\n", dao);

    return 0;
}

