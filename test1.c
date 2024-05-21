#include <stdio.h>

// �̺� �˻� �Լ�
int binarySearch(int arr[], int low, int high, int target, int *count) {
    while (low <= high) {
        (*count)++; // ���� Ƚ�� ����

        int mid = low + (high - low) / 2;

        // �߰� ���� Ÿ������ Ȯ��
        if (arr[mid] == target) {
            return mid;
        }
        // �߰� ���� Ÿ�ٺ��� ������ ������ �κ��� Ž��
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // �߰� ���� Ÿ�ٺ��� ũ�� ���� �κ��� Ž��
        else {
            high = mid - 1;
        }
    }
    // Ÿ���� ã�� ���� ���
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int count = 0; // ���� Ƚ�� �ʱ�ȭ

    // �̺� �˻� ����
    int result = binarySearch(arr, 0, n - 1, target, &count);

    if (result != -1) {
        printf("���� %d�� %d��°���� ã�ҽ��ϴ�.\n", target, result + 1);
        printf("�̺� �˻��� %d�� ����Ǿ����ϴ�.\n", count);
    } else {
        printf("���Ҹ� ã�� �� �����ϴ�.\n");
    }

    return 0;
}

