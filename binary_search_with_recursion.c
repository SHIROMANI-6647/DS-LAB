#include<stdio.h>

int binary_search(int,int [],int,int);

int main(){
    int array[50],size,key,i,pos,low,high;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("\nEnter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter key:");
    scanf("%d",&key);
    low=0;
    high=size-1;
    pos=binary_search(key,array,low,high);
    if(pos>=0){
        printf("%d is found at %d\n",key,pos);
    }
    else{
        printf("%d is not found\n",key);
    }
}


int binary_search(int key,int array[50],int low,int high){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            return binary_search(key,array,low,mid-1);
        }
        else{
            return binary_search(key,array,mid+1,high);
        }
    }
    return -1;
}
