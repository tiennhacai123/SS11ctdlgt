#include<stdio.h>

int findMax(int array[], int n) {
    if (n <= 0) return -1;
    int temp = array[0];
    for (int i = 1; i < n; i++) { 
        if (temp < array[i]) {
            temp = array[i];
        }
    }
    return temp;
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le. Vui long nhap lai.\n");
        return 1; 
    }

    int array[n];
    printf("\nNhap gia tri cua tung phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int result = findMax(array, n);
    if (result != -1) {
        printf("\nGia tri lon nhat cua mang la: %d\n", result);
    } else {
        printf("\nMang khong co phan tu nao.\n");
    }

    return 0;
}
