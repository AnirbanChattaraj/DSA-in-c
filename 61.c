#include<stdio.h>
int main(){
    int arr[3]={1,2,4};
    int n=4;
    int sum = n*(n+1)/2;
    int arrSum=0;
    for(int i=0;i<3;i++){
        arrSum+=arr[i];
    }
    printf("Missing element: %d", sum-arrSum);
    return 0;
}