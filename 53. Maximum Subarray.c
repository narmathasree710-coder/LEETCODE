int maxSubArray(int* nums, int numsSize) {
    int cursum=nums[0],maxsum=nums[0];
    for(int i=1;i<numsSize;i++){
        if(cursum<0){cursum=nums[i];}
        else{ cursum+=nums[i];}
        if(cursum>maxsum){ maxsum=cursum;}}
    return maxsum;}
