#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so dong : ");
    scanf("%d", &row);
    printf("Nhap so cot : ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int n = row;
    int flag[n];
    for (int i = 0; i < n; i++) {
        flag[i] = arr[i][n - i - 1];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (flag[i] < flag[j]) {
                int temp = flag[i];
                flag[i] = flag[j];
                flag[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i][n - i - 1] =flag[i];
    }
    printf("Mang sau khi sap xep cac phan tu tren duong cheo phu giam dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

