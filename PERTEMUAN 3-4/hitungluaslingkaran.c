#include <stdio.h>

// fungsi menghitung luas lingkaran
float luasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float jari, luas;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jari);

    luas = luasLingkaran(jari);

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}