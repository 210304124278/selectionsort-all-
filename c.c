#include<stdio.h>
void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
void selectionsort(int arr[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
    min_idx=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min_idx])
        min_idx=j;}
        if(min_idx!=i)
        swap(&arr[min_idx],&arr[i]);

    }
    }
void printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
}
int main(){
    int arr[]={64,25,12,22,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    printf("sorted array is:\n");
    printarray(arr,n);
    printf("\n kusum 210304124278" );
    return 0;
}
