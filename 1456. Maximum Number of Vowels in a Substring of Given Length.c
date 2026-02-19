#include<stdio.h>
int maxVowels(char* s, int k) {
    int n=strlen(s);
    int windowCount=0,maxCount=0;
    int isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}
    for(int i=0;i<k;i++){
        if(isVowel(s[i]))  windowCount++;}
    maxCount=windowCount;
    for(int i=k;i<n;i++){
        if(isVowel(s[i])) windowCount++;
        if(isVowel(s[i-k])) windowCount--;
        if(windowCount>maxCount) maxCount=windowCount;}
    return maxCount;}
