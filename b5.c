#include <stdio.h>

// Hàm tìm kiếm nhị phân bằng đệ quy
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, left, mid - 1, target);
    } else {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
}

int main() {
    int n, target;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }

    int arr[n];
    printf("Nhap cac phan tu cua mang da sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, result);
    } else {
        printf("Khong tim thay phan tu trong mang.\n");
    }

    return 0;
}
