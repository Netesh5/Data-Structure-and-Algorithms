#include<stdio.h>
int main(){
	int n,i,j,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
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
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
    		if(a[i]>a[j]){
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
	printf("\n-------------------------------");
	printf("\nSorted Array : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n-------------------------------\n");
	
	
	return 0;
}
