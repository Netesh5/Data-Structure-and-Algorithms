#include<stdio.h>
void merge(int a[],int l,int m ,int h){
	int i,j,k,temp[50];
	i=l;
	j=m+1;
	k=l;
	while(i<=m && j<=h){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}
	while(i<=m){
		temp[k++]=a[i++];
	}
		while(j<=h){
			temp[k++]=a[j++];
		}
		for(i=l;i<=h;i++){
			a[i]=temp[i];
		}
	
	
}
void merge_sort(int a[],int l ,int h){
	int m;
	if(l<h){
		m=(l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
	}
}
int main(){
	int n,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
   	int l=0,h=n-1;
    int a[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n-------------------------------");
    printf("\nArray before sorting: ");
     for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n-------------------------------");
	merge_sort(a,l,h);
	printf("\n-------------------------------");
	printf("\nSorted Array : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n-------------------------------\n");
	return 0;
}
