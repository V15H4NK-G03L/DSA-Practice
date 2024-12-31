#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=-1,wordIndex=0;
        sentence.insert(sentence.begin(),' ');
        for(int i=0;i<sentence.length();i++){

            if(count==searchWord.length()){break;}

            if(sentence[i]==' '){wordIndex++;}

            if(sentence[i]==searchWord[0] && sentence[i-1]==' '){
                count = 0;
                for(int j=0;j<searchWord.length();j++){
                    if(sentence[j+i]==searchWord[j]){
                        count++;
                    }
                }
            }
        }

        if(searchWord.length()==count){ return wordIndex; }

        return -1;
    }
};