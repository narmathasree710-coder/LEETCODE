bool isAnagram(char* s, char* t) {
    int countS,countT;
    for(char ch='a';ch<='z';ch++){
        countS=0; countT=0;
        for(int i=0;s[i];i++){
            if(s[i]==ch){
                countS++;}}
        for(int j=0;t[j];j++){
            if(t[j]==ch){
                countT++;}}
        if(countS!=countT) return false;}
    return true;}
