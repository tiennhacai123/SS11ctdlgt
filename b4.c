#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50]; 
    int score;  
} Student;
void inputStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf(" %[^\n]", students[i].name); 
        printf("Nhap diem cua %s: ", students[i].name);
        scanf("%d", &students[i].score);
    }
}
int findStudentByName(Student students[], int n, char *name, int *score) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) { 
            *score = students[i].score;
            return 1;
        }
    }
    return 0; 
}
int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong sinh vien phai lon hon 0.\n");
        return 1;
    }
    Student students[n];
    inputStudents(students, n);
    char name[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf(" %[^\n]", name); 

    int score;
    if (findStudentByName(students, n, name, &score)) {
        printf("Diem cua %s la: %d\n", name, score);
    } else {
        printf("Khong tim thay sinh vien.\n");
    }

    return 0;
}
