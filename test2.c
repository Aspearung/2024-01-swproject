#include <stdio.h>

#define MAX_ROWS 100 // 최대 행의 개수
#define MAX_COLS 100 // 최대 열의 개수

// 행렬 곱셈 함수
void matrixMultiply(int mat1[MAX_ROWS][MAX_COLS], int rows1, int cols1, int mat2[MAX_ROWS][MAX_COLS], int rows2, int cols2, int result[MAX_ROWS][MAX_COLS]) {
    // 첫 번째 행렬의 행의 개수와 두 번째 행렬의 열의 개수가 일치해야 곱셈이 가능합니다.
    if (cols1 != rows2) {
        printf("행렬의 크기가 일치하지 않아 곱셈이 불가능합니다.\n");
        return;
    }

    // 결과 행렬 계산
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


// 행렬 출력 함수
void printMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}}; // 첫 번째 행렬
    int mat2[MAX_ROWS][MAX_COLS] = {{7, 8}, {9, 10}, {11, 12}}; // 두 번째 행렬
    int rows1 = 2, cols1 = 3; // 첫 번째 행렬의 행과 열의 개수
    int rows2 = 3, cols2 = 2; // 두 번째 행렬의 행과 열의 개수
    int result[MAX_ROWS][MAX_COLS]; // 결과 행렬

    // 행렬 곱셈 함수 호출
    matrixMultiply(mat1, rows1, cols1, mat2, rows2, cols2, result);

    // 결과 행렬 출력
    printf("결과 행렬:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
