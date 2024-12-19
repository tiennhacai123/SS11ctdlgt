#include <stdio.h>
#include <stdlib.h>

// Hàm nhập giá trị vào mảng
void scanfArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

// Hàm tìm kiếm nhị phân
int binarySearch(int array[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == target) {
            return mid; // Trả về chỉ số tìm thấy
        } else if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Không tìm thấy
}

int main() {
    int choice;
    int n = 0;
    int *array = NULL; 
    int target, result;

    do {
        printf("\n===================== MENU ======================\n");
        printf("1. Nhap so phan tu vao mang\n");
        printf("2. Nhap gia tri can tim kiem\n");
        printf("3. Thoat\n");
        printf("Moi nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);

                // Cấp phát bộ nhớ động cho mảng
                array = (int *)malloc(n * sizeof(int));
                if (array == NULL) {
                    printf("Khong the cap phat bo nho!\n");
                    return 1;
                }

                // Nhập giá trị cho mảng
                printf("Nhap gia tri vao mang:\n");
                scanfArray(array, n);
                break;

            case 2:
                if (array == NULL || n == 0) {
                    printf("Vui long nhap mang truoc!\n");
                    break;
                }
                printf("Nhap gia tri can tim kiem: ");
                scanf("%d", &target);

                // Gọi hàm tìm kiếm nhị phân
                result = binarySearch(array, n, target);
                if (result != -1) {
                    printf("Phan tu %d duoc tim thay o chi muc %d.\n", target, result);
                } else {
                    printf("Khong tim thay phan tu %d trong mang.\n", target);
                }
                break;

            case 3:
                // Giải phóng bộ nhớ và thoát
                free(array);
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
                break;
        }
    } while (1);

    return 0;
}
