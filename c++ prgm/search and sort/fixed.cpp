#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fixed(vector<int> arr);
int main (){
    vector<int> arr{7,2,3,1,4};
    fixed(arr);

    return 0;
}

void fixed(vector<int> arr){
    vector<int> result;
    int n=arr.size();
    for(int i=0;i<n;i++){
        result.push_back(arr[i]);
    }

    sort(arr.begin(),arr.end());
    cout<<"the position of the given array is fixed are :"<<endl;

    for(int i=0;i<n;i++){

        if(result[i]==arr[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    cout<<"the given array is :";

    for(int i=0;i<n;i++){
             if(result[i]==arr[i]){
            cout<<arr[i]<<" ";
        }
        }
    }