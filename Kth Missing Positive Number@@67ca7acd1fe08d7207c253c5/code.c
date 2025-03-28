int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, currentNum = 1, index = 0;

    // Iterate until we find the kth missing number
    while (missingCount < k) {
        // Check if currentNum is present in the array
        if (index < n && arr[index] == currentNum) {
            index++;  // Move to the next array element
        } else {
            missingCount++;  // Count this number as missing
        }

        // If the kth missing number is found, return it
        if (missingCount == k) {
            return currentNum;
        }

        // Move to the next number
        currentNum++;
    }

    // In case we do not find it within the range
    return -1;
}
