#include <stdio.h>

int main() {
    int arr[10];
    int i, max;

    // Input 10 angka
    printf("Masukkan 10 angka:\n");
    for(i = 0; i < 10; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Anggap elemen pertama sebagai terbesar
    max = arr[0];

    // Bandingkan dengan elemen lain
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Output hasil
    printf("Nilai terbesar adalah: %d\n", max);

    return 0;
}