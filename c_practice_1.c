#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for (int i=0;i<n;++i){
        scanf("%d\n",arr+i);
        printf("kalp\n");
    }
    for (int i=0;i<n;i++){
        printf("%d\n",*(arr+i));
    }
    return 0;
}