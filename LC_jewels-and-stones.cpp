#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.length();i++){
            for(int j=0;j<jewels.length();j++){
                if(stones.at(i)==jewels.at(j)){
                    count += 1;
                    break;
                }
            }
        }
    return count;
    }
};

//Accepted