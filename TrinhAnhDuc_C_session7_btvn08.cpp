#include <stdio.h>

int main() {
    long n;
    int x, dem = 0;
    
    printf("Nhap so nguyen n: ");
    scanf("%ld", &n);
    
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);
    
    long temp = n; // luu l?i giá tr? ban d?u d? x? lý
    
    if (temp == 0 && x == 0) {
        dem = 1;
    } else {
        while (temp != 0) {
            int chu_so = temp % 10;
            if (chu_so == x)
                dem++;
            temp /= 10;
        }
    }
    
    printf("Chu so %d xuat hien %d lan trong %ld\n", x, dem, n);
    
    return 0;
}

