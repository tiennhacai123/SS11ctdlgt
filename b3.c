#include <stdio.h>
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void checkSymmetricElements(int arr[], int n) {
    int hasSymmetric = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - i - 1]);
            hasSymmetric = 1;
        }
    }
    if (!hasSymmetric) {
        printf("Khong co phan tu doi xung trong mang.\n");
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }
    int arr[n];
    inputArray(arr, n);
    printf("Kiem tra phan tu doi xung trong mang...\n");
    checkSymmetricElements(arr, n);
    return 0;
}
