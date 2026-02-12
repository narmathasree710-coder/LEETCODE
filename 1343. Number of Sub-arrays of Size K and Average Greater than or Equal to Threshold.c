Example 1:
Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).
Example 2:
Input: arr = [11,13,17,23,29,31,7,5,2,3], k = 3, threshold = 5
Output: 6
Explanation: The first 6 sub-arrays of size 3 have averages greater than 5. Note that averages are not integers.

int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int count=0,windowCount=0;
    for(int i=0;i<k;i++){
        windowCount+=arr[i];}
    if(windowCount>=threshold * k)  count++;
    for(int i=k;i<arrSize;i++){
        windowCount=windowCount+arr[i]-arr[i-k];
        if(windowCount>=threshold * k)  count++;
    }return count;}
