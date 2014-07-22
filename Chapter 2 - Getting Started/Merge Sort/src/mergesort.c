#include<stdio.h>
#include<stdlib.h>
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
int main(){
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
void merge_sort(int a[],int p,int r){
	int q;
	if(p<r){
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}
void merge(int a[],int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int l[n1+1],r1[n2+1],i,j,k;
	for(i=0;i<n1;i++){
		l[i]=a[p+i];
	}
	for(i=0;i<n2;i++){
		r1[i]=a[q+i+1];
	}
	l[n1]=999999;
	r1[n2]=999999;
	i=0;
	j=0;
	for(k=p;k<=r;k++){
		if(l[i]<=r1[j]){
			a[k]=l[i];
			i++;
		}
		else{
			a[k]=r1[j];
			j++;
		}
	}
}
