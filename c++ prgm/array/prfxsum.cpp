#include<iostream>
#include<vector>
using namespace std;

int  main(){
    int n;
    cin>>n;
    int arr[n];
    int prefix[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> result;
    prefix[0]=arr[0];

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        if(prefix[i]==k){
        result.push_back(prefix[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }

}
