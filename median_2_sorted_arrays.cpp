#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    float findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int j=0,k;
		float mid;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
       
        sort(nums1.begin(),nums1.end());
         for(auto a:nums1){
        	cout<<a;
		}
		cout<<endl;
        int l=nums1.size();
        if(l%2==0){
            mid=nums1[l/2]+nums1[l/2-1];
            mid=mid/2;
        }
        else{
            mid=nums1[l/2];
        }
        return mid;
    }
};


int main(){
	
	vector<int> v1{1,3,4};
	vector<int> v2{2};
	Solution s;
	cout<<s.findMedianSortedArrays(v1,v2);
	return 0;
	
}
