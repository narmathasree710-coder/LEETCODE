void sortColors(int* nums, int numsSize) {
    int count0=0,count1=0,count2=0,value=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) count0++;
        else if(nums[i]==1) count1++;
        else count2++;}
    for(int i=0;i<count0;i++) nums[value++]=0;
    for(int i=0;i<count1;i++) nums[value++]=1;
    for(int i=0;i<count2;i++) nums[value++]=2;}
