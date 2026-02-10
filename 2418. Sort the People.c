Example 1:
Input: names = ["Mary","John","Emma"], heights = [180,165,170]
Output: ["Mary","Emma","John"]
Explanation: Mary is the tallest, followed by Emma and John.
Example 2:
Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]
Output: ["Bob","Alice","Bob"]
Explanation: The first Bob is the tallest, followed by Alice and the second Bob.

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    for(int i=0;i<namesSize;i++){
        for(int j=i+1;j<namesSize;j++){
            if(heights[i]<heights[j]){
                int h=heights[i];
                heights[i]=heights[j];
                heights[j]=h;
                char *n=names[i];
                names[i]=names[j];
                names[j]=n;}}}
*returnSize=namesSize;
return names;}
