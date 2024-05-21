#include <stdio.h>

#define MAX_ROWS 100 // �ִ� ���� ����
#define MAX_COLS 100 // �ִ� ���� ����

// ��� ���� �Լ�
void matrixMultiply(int mat1[MAX_ROWS][MAX_COLS], int rows1, int cols1, int mat2[MAX_ROWS][MAX_COLS], int rows2, int cols2, int result[MAX_ROWS][MAX_COLS]) {
    // ù ��° ����� ���� ������ �� ��° ����� ���� ������ ��ġ�ؾ� ������ �����մϴ�.
    if (cols1 != rows2) {
        printf("����� ũ�Ⱑ ��ġ���� �ʾ� ������ �Ұ����մϴ�.\n");
        return;
    }

    // ��� ��� ���
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


// ��� ��� �Լ�
void printMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}}; // ù ��° ���
    int mat2[MAX_ROWS][MAX_COLS] = {{7, 8}, {9, 10}, {11, 12}}; // �� ��° ���
    int rows1 = 2, cols1 = 3; // ù ��° ����� ��� ���� ����
    int rows2 = 3, cols2 = 2; // �� ��° ����� ��� ���� ����
    int result[MAX_ROWS][MAX_COLS]; // ��� ���

    // ��� ���� �Լ� ȣ��
    matrixMultiply(mat1, rows1, cols1, mat2, rows2, cols2, result);

    // ��� ��� ���
    printf("��� ���:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
