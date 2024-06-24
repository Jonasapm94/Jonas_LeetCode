#include <bits/stdc++.h>

using namespace std;

void addToMapFromVector(vector<int>& v, int m, map<int,int>& temp){
    for (int x = 0; x<m; x++){
            if(temp[v[x]] != 0){
                temp[v[x]]++;
            } else {
                temp[v[x]] = 1;
            }
    }
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    map<int, int> temp;
    addToMapFromVector(nums1, m, temp);
    addToMapFromVector(nums2, n, temp);
    vector<int> arr;
    
    for (auto& pair : temp){
        while(pair.second != 0){
            arr.push_back(pair.first);
            pair.second--;
        }
    }
    nums1 = arr;
}

int main(){
    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    int m = 1;
    int n = 0;
    merge(nums1,m,nums2,n);
}