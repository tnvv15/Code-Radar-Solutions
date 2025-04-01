// Your code here...
#include <stdio.h>

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    int M;
    M=linearsearch(arr,n,key);
    if(M!=-1){
        printf("%d",M);
    }
    else{
        printf("-1");
    }
}