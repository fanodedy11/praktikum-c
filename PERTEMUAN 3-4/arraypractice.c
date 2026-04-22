#include <stdio.h>

// fungsi sorting (bubble sort sederhana)
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// fungsi mean
float mean(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// fungsi median
float median(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

// fungsi mode
int mode(int arr[], int n) {
    int i, j, count, maxCount = 0;
    int mode = arr[0];

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    // input
    for (i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // sorting untuk median & mode
    sort(arr, n);

    // output array setelah sort
    printf("\nData setelah diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMean   = %.2f", mean(arr, n));
    printf("\nMedian = %.2f", median(arr, n));
    printf("\nMode   = %d\n", mode(arr, n));

    return 0;
}