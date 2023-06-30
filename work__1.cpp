#include<stdio.h>
struct info{
	char name[100];
	char date[100];
};
int main(){
	int n;
	scanf("%d\n",&n);
	struct info s1[n];
	for (int i=0;i<n;i++){
		scanf("%s\n",s1[i].name);
    	scanf("%d\n",s1[i].date);
	}
	int arr1[n];
	for (int l=0;l<n;l++){
	    arr1[l]=l;
	}
	int t=0;
	for (int j=0;j<n-1;j++){
		int a1=s1[j].name[t];
		int a2=s1[j+1].name[t];
		if (a1>a2){
			int temp=arr1[j+1];
			arr1[j+1]=arr1[j];
			arr1[j+1]=temp;
		} else{
			arr1[j]=j;
		} 
	}
	for (int u=0;u<n;u++){
		printf("%d\n",arr1[u]);
	}
	return 0;
}