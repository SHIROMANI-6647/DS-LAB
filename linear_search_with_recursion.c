#include<stdio.h>

int linear_search(int,int [],int,int);

int main(){
    int array[50],size,key,i,pos;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("\nEnter the array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter the search element:");
    scanf("%d",&key);
    int index=0;
    pos=linear_search(key,array,size,index);
    if(pos>=0){
        printf("\n%d is found at %d\n",key,pos);
    }
    else{
        printf("\n%d is not found",key);
    }
}


int linear_search(int key,int array[50],int size,int index){
   while(index<size){
        if(array[index]==key){
            return index;
        }
        else{
            return linear_search(key,array,size,index+1);
        }
    }
return -1;
}

