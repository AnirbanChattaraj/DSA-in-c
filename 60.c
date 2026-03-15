#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,7,5,6};
    int flag=0;

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }

    if(flag==1)
        printf("Duplicate found");
    else
        printf("No Duplicate found");

    return 0;
}