#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int check = (nums1.size()-1)/2;
        float median;
        if(nums1.size()==1){return nums1[0];}
        float a = nums1[check], b = nums1[check+1];
        if(nums1.size()%2!=0){median = a;}
        else{median = (float)((a+b)/2);}
        return median;
    }
};