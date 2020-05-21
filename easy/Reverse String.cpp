char* reverseString(char* s, int sSize){
    char ch;
    for(int i=0;i<sSize/2;i++){
        ch = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i]=ch;
    }
    return s;
}

