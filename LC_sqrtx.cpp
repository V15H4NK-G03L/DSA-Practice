class Solution {
public:
    int mySqrt(int x) {
        long long int y;
        for(long long int i=0;i<=x;i++){
            y = i * i;
            if(y<=x){
                continue;
            }
            else{
                y = i-1;
                break;
            }
        }
        return y;
    }
};

//Accepted