#include <stdio.h>
#define N 3 // 행렬의 크기 (3x3 행렬을 가정)
// 두 정방행렬의 곱셈 함수
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
// 행렬을 출력하는 함수
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

    printf("첫 번째 행렬:\n");
    print_matrix(mat1);
    printf("\n두 번째 행렬:\n");
    print_matrix(mat2);

    matrix_multiply(mat1, mat2, result);

    printf("\n행렬의 곱셈 결과:\n");
    print_matrix(result);

    return 0;
}
