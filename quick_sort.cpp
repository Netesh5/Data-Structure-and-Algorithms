#include<stdio.h>
int parition(int a[],int l,int h){
int pivot,p,q,temp;
pivot=a[l];
p=l;
q=h;
while(p<=q){
while(a[p]<=pivot){
p++;
}
while(a[p]>=pivot){
q--;
}
if(p<q){
temp=a[p];
a[p]=a[q];
a[q]=temp;
}
}
temp=a[q];
a[q]=a[l];
a[l]=temp;
return q;
}
void quick_sort(int a[],int l,int h){
if(l<h){
int loc=parition(a,l,h);
quick_sort(a,l,loc-1);
quick_sort(a,l+loc,h);
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
    quick_sort(a,l,h);
printf("\n-------------------------------");
printf("\nSorted Array : ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("\n-------------------------------\n");
return 0;                      
}
