#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(vector<int> arr){
   int n=arr.size();
   if(n<=0){
       return 0;
   }
    sort(arr.begin(),arr.end());

    int count=2;
    for(int i=0;i<arr.size()-2;i++){

        if(arr[i]-arr[i+1]==arr[i+1]-arr[i+2]){
           count++;
        }
     }
    

    return count;
}

int main (){
    vector<int> arr{0,2,1,3,5,6,7,8,9,10};
    cout<<find(arr);
    cout<<endl;

    return 0;
}