#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int checked[n]; 
    for (int i = 0; i < n; i++) {
        checked[i] = 0;
    }

    int hasDuplicates = 0; 

    for (int i = 0; i < n; i++) {
        if (checked[i]) continue; 

        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                checked[j] = 1; 
            }
        }

        if (count > 1) {
            printf("Phan tu %d xuat hien %d lan.\n", arr[i], count);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Ket qua tim kiem phan tu lap lai:\n");
    findDuplicates(arr, n);

    return 0;
}
