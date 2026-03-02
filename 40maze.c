#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways=0;
    int downways=0;
    if (cr==er && cc==ec)
    {
       return 1;
    }
    if (cr==er)
    {
     rightways+=maze(cr,cc+1,er,ec);
    }
    if (cc==ec)
    {
    downways+=maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec)
    {
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalWays=rightways+downways;
    return totalWays;

}
int main(){
    int m,n;
    printf("Enter your rows:");
    scanf("%d",&n);
    printf("Enter your column:");
    scanf("%d",&m);
    printf("The total ways %d",maze(1,1,n,m));
    return 0;
}