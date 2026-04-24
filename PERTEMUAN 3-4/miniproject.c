#include <stdio.h>
#include <stdlib.h>

// Struct mahasiswa
struct Mahasiswa {
    char nama[50];
    int nilai;
};

int main() {
    int n, i;
    float rata = 0;

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    // Alokasi memori pakai pointer
    struct Mahasiswa *mhs;
    mhs = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    // Input data mahasiswa
    for(i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama  : ");
        scanf(" %[^\n]", mhs[i].nama);

        printf("Nilai : ");
        scanf("%d", &mhs[i].nilai);

        rata += mhs[i].nilai;
    }

    // Hitung rata-rata
    rata = rata / n;

    // Output data
    printf("\n=== Data Mahasiswa ===\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s - %d\n", i + 1, mhs[i].nama, mhs[i].nilai);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

    // Bebaskan memori
    free(mhs);

    return 0;
}