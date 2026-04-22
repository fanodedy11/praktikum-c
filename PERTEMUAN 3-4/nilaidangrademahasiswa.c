#include <stdio.h>

// fungsi menentukan grade
char tentukanGrade(int nilai) {
    if (nilai >= 80) {
        return 'A';
    } else if (nilai >= 70) {
        return 'B';
    } else if (nilai >= 60) {
        return 'C';
    } else if (nilai >= 50) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int n, i, nilai;
    char grade;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nMahasiswa ke-%d\n", i);
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);

        grade = tentukanGrade(nilai);

        printf("Grade: %c\n", grade);
    }

    return 0;
}