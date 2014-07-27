#include<stdio.h>
void insertion_sort(int[],int);
int main(){
	int a[10],n,i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;	
	}
	insertion_sort(a,n);
	return 0;
}
void insertion_sort(int a[],int n){
	int i,j,key;
	for(j=1;j<n;j++){
		i=j-1;
		key=a[j];
		while(i>=0&&a[i]>key){
			a[i+1]=a[i];
			i--;	
		}
		a[i+1]=key;
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
