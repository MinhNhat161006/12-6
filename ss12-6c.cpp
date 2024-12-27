#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số hoàn hảo
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) return false;
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}

int main() {
    int so1, so2;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &so1, &so2);

    // Kiểm tra số thứ nhất
    if (kiemTraSoHoanHao(so1)) {
        printf("%d là số hoàn hảo.\n", so1);
    } else {
        printf("%d không phải là số hoàn hảo.\n", so1);
    }

    // Kiểm tra số thứ hai
    if (kiemTraSoHoanHao(so2)) {
        printf("%d là số hoàn hảo.\n", so2);
    } else {
        printf("%d không phải là số hoàn hảo.\n", so2);
    }

    return 0;
}
