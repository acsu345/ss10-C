#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Nhap gia tri cac phan tu:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
        for (int i = 0; i < row - 1; i++) {
        	for (int j = i + 1; j < row; j++) {
            if (a[i][i] > a[j][j]) {
                int temp = a[i][i];
                a[i][i] = a[j][j];
                a[j][j] = temp;
            }
        }
    }
    printf("Ma tran sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
