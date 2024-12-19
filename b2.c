#include<stdio.h>

int findMin(int array[], int n){

    if(n<=0) return -1;
    
    int temp = array[0];
    for(int i =0; i<n; i++){
        if(temp>array[i]){
            temp = array[i];
        }
        return temp;
    }
}
int main(){
    int n;
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("\nNhap vao gia tri tung phan tu\n");
    for(int i=0; i<n; i++){
        printf("array[%d] = ", i);
        scanf("%d",&array[i]);
    }
    int result = findMin(array,n);
    if(result != -1){
        printf("Gia tri nho nhat trong mang la: %d", result);
    }else{
        printf("Mang khong co gia tri");
    }
    return 0;
}