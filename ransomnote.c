383 RANSOMNOTE

bool canConstruct(char* ransomNote, char* magazine) {
    int magcount[26]={0};
    for(int i=0;magazine[i]!='\0';i++){
        magcount[magazine[i] - 'a']++;
    }
    for(int i=0;ransomNote[i] != '\0';i++){
        int letter =ransomNote[i] - 'a';
        if(magcount[letter]==0){
        return false;
    }
    magcount[letter]--;
}
return true;
}
