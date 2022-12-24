#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int pairsum(int arr[],int sum,int n){

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        int x=sum-arr[i];

        if(s.find(x)!=s.end()){
            cout<<"{"<<x<<","<<arr[i]<<"}"<<endl;
        }

        s.insert(arr[i]);
    }

    return {};
}

int main (){
    int n;
    cout<<"enetr the no of elemnt :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elemnt :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"eneter the value of the sum :"<<endl;
    cin>>sum;
    cout<<"the subset of the sum is :"<<endl;
    cout<<pairsum(arr,sum,n);

}