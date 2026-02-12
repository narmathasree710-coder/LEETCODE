Example 1:
Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:
Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:
Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.

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
