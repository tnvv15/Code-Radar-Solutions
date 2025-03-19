// Your code here...
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void insertionSort(int arr[],int n){
    for(int i=1; i<n;i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}