#include<bits/stdc++.h>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int maxSubarraySum(vector<int> arr){
    int n = arr.size();

    int maxi = arr[0];
        int res = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            maxi = max(arr[i],maxi+arr[i]);
            res=max(res,maxi);
        }
        return res;

        
}

int main(){
    vector<int> arr{-1,-1,-1,-1,1};
    cout<<maxSubarraySum(arr);
}