// Your code here...#include <stdio.h>
#include <string.h>
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
void insertionSort(char arr[][100],int n){
    
    for(int i=1; i<n;i++){
        char key[100];
        strcpy(key,arr[i]);
        int j = i-1;
        while(j>=0 && strcmp(arr[j],key)>0){
            strcpy(arr[j+1] ,arr[j]);
            j--;
        }
        strcpy(arr[j+1] , key);
    }
}
