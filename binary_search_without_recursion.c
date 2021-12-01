#include<stdio.h>

int binary_search(int,int [],int);

int main(){
    int array[50],size,key,pos,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("\nEnter the array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter the key:");
    scanf("%d",&key);
    pos = binary_search(key,array,size);
    if(pos>=0){
        printf("%d is found at %d\n",key,pos);
    }
    else{
        printf("%d is not found\n",key);
    }
}
int binary_search(int key,int array[50],int size){
    int low = 0,high = size - 1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(array[mid]==key){
            return mid;
            }
        else if(array[mid]<key){
            low = mid+1;
            }
        else{
            high = mid-1;
            }
        }
    return -1;
}

