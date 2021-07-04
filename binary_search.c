#include<stdio.h>
int main(){
	int n,mid,key,L,H,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	L=0;H=n-1;
	int a[n];
	printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
	printf("\n-------------------------------");
    printf("\nEntered elements are : ");
     for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n-------------------------------");
    printf("\n\nEnter the number to search : ");
    scanf("%d",&key);
    while(L<=H){
		mid=(L+H)/2;
		if(key<a[mid]){
			L=0,H=mid-1;
		}
		else if(key>a[mid]){
			L=mid+1,H=H;
		}
		else if(key==a[mid]) {
			printf("Number found at position %d\n\n",mid+1);
			break;
		}
	}
	if(L>H){
		printf("Number not found");
	}
	return 0;
}
