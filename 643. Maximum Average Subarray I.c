double findMaxAverage(int* nums, int numsSize, int k) {
    int maxSum=0;
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum+=nums[i];}
    maxSum=windowSum;
    for(int i=k;i<numsSize;i++){
        windowSum= windowSum + nums[i]- nums[i-k];
        if(windowSum>maxSum){         
            maxSum=windowSum;}}
    return (double)maxSum/k;}
