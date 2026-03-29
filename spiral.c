#include<stdio.h>

int main(){
    int r,c;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    printf("Enter number of columns: ");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }
    }

    int minr = 0, maxr = r - 1;
    int minc = 0, maxc = c - 1;
    int count = 0, total = r * c;

    while (count < total)
    {
        // top row
        for (int j = minc; j <= maxc && count < total; j++){
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;

        // right column
        for (int i = minr; i <= maxr && count < total; i++){
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;

        // bottom row
        for (int j = maxc; j >= minc && count < total; j--){
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;

        // left column
        for (int i = maxr; i >= minr && count < total; i--){
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}