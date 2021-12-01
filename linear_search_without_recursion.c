#include<stdio.h>

int linear_search(int,int [],int);

int main(){
    int array[50],size,key,i,pos;
    printf("Enter the no.of elements in the array:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the search element:");
    scanf("%d",&key);
    pos=linear_search(key,array,size);
    if(pos>=0){
        printf("\n%d is found at pos=%d\n",key,pos);
    }
    else{
        printf("\n%d is not found\n",key);
    }
}


int linear_search(int key,int array[50],int size){
    int i=0;
    while(i<size){
        if (array[i]==key){
            return i;
        }
        i++;
    }
    return -1;
}
