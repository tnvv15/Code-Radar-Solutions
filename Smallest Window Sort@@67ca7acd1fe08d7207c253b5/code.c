void findUnsortedSubarray(int arr[],int n){
    int left=0,right=n-1;
    while(left<n-1 && arr[left]<=arr[left+1])
    left++;
    if(left==n-1)
    return 0;
    while(right>0 && arr[right]>=arr[right-1])
    right--;
    int minVal=arr[left];maxVal=arr[left];
    for (int i=left;i<=right;i++){
        if(arr[i]<minVal){
            minVal=arr[i];
        }
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    while(left>0 && arr[left-1]> minVal)
    left--;
    while(right<n-1 && arr[right+1]<maxVal)
    right++;
    return right-left+1;
}