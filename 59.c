#include<stdio.h>
void reverse(int arr[], int a, int b){
    for(int i=a, j=b; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    int k;
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    k = k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Rotated array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}