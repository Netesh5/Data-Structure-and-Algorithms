#include<stdio.h>
int main(){
    int n,i,key,flag,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
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
    for(i=0;i<n;i++){
        if(a[i]==key)
        {
            flag=1;
            pos=i+1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("\nNumber found in the list at position %d\n\n",pos);
    }
    else{
        printf("\nNumber not found");
    }


    return 0;
}
