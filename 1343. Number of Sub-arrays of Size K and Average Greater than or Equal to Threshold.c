int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int count=0,windowCount=0;
    for(int i=0;i<k;i++){
        windowCount+=arr[i];}
    if(windowCount>=threshold * k)  count++;
    for(int i=k;i<arrSize;i++){
        windowCount=windowCount+arr[i]-arr[i-k];
        if(windowCount>=threshold * k)  count++;
    }return count;}
