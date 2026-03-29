#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int a[n][n];

    int minr = 0, maxr = n - 1;
    int minc = 0, maxc = n - 1;

    int num = 1;
    int total = n * n;
    int count = 0;

    while (count < total)
    {
        // top row
        for (int j = minc; j <= maxc && count < total; j++){
            a[minr][j] = num++;
            count++;
        }
        minr++;

        // right column
        for (int i = minr; i <= maxr && count < total; i++){
            a[i][maxc] = num++;
            count++;
        }
        maxc--;

        // bottom row
        for (int j = maxc; j >= minc && count < total; j--){
            a[maxr][j] = num++;
            count++;
        }
        maxr--;

        // left column
        for (int i = maxr; i >= minr && count < total; i--){
            a[i][minc] = num++;
            count++;
        }
        minc++;
    }

    // print matrix
    printf("\nSpiral Matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}