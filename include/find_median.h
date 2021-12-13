#ifndef __FIND_MEDIAN_H__
#define __FIND_MEDIAN_H__

#include<iostream>
#include<vector>
using namespace std;

class Median {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i=0,j=0,l=0,r=0;
        for(int x=0; x<=(m+n)/2;x++){
            l=r;
            r=(i<m && ( j>=n || nums1[i] < nums2[j])) ? nums1[i++]:nums2[j++];
        }
        return  (m+n)& 1? r:(l+r) / 2.0;
    }
};

#endif // __FIND_MEDIAN_H__