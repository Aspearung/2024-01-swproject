#include <stdio.h>
#define N 3 // ����� ũ�� (3x3 ����� ����)
// �� ��������� ���� �Լ�
void matrix_multiply(int mat1[][N], int mat2[][N], int result[][N]) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            result[i][j] = 0;
            for (k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
// ����� ����ϴ� �Լ�
void print_matrix(int mat[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};


    int result[N][N];

    printf("ù ��° ���:\n");
    print_matrix(mat1);
    printf("\n�� ��° ���:\n");
    print_matrix(mat2);

    matrix_multiply(mat1, mat2, result);

    printf("\n����� ���� ���:\n");
    print_matrix(result);

    return 0;
}
