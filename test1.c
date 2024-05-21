#include <stdio.h>

// 이분 검색 함수
int binarySearch(int arr[], int low, int high, int target, int *count) {
    while (low <= high) {
        (*count)++; // 수행 횟수 증가

        int mid = low + (high - low) / 2;

        // 중간 값이 타겟인지 확인
        if (arr[mid] == target) {
            return mid;
        }
        // 중간 값이 타겟보다 작으면 오른쪽 부분을 탐색
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // 중간 값이 타겟보다 크면 왼쪽 부분을 탐색
        else {
            high = mid - 1;
        }
    }
    // 타겟을 찾지 못한 경우
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int count = 0; // 수행 횟수 초기화

    // 이분 검색 수행
    int result = binarySearch(arr, 0, n - 1, target, &count);

    if (result != -1) {
        printf("원소 %d를 %d번째에서 찾았습니다.\n", target, result + 1);
        printf("이분 검색이 %d번 수행되었습니다.\n", count);
    } else {
        printf("원소를 찾을 수 없습니다.\n");
    }

    return 0;
}

