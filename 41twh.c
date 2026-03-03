#include<stdio.h>
void twh(int n, char s, char h , char d){
    if (n==1)
    {
        printf("%c -> %c\n",s,d);
        return ;

    }
        twh(n-1,s,d,h);
        printf("%c -> %c\n",s,d);
        twh(n-1,h,s,d);
        return ;
}
int main(){
    int n;
    printf("Enter number of disks:");
    scanf("%d",&n);
    twh(n,'S','H','D');
    return 0;
}