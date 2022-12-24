#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> subarray(vector<int> a){
    vector<int> b(a);
    int n=a.size();
    sort(a.begin(),a.end());

    int i=0;
    while(i<n and a[i]==b[i]){
        i++;
    }

    int j=a.size()-1;
    while(j>=0 and a[j]==b[j]){
        j--;
    }

    if(i==a.size()){
        return {-1,-1};
    }

    return {i,j};
}

int main (){
    vector<int> a{0,1,2,3,4,5,8,6,7,9,10,11};
    //vector<int> a{};
   
   
    auto ans=subarray(a);
    cout<<"{";
   for(auto x:ans){
       cout<<x<<",";
       
   }
   cout<<"}";
    return 0;
}