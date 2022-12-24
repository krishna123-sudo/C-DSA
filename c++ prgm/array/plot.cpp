#include<iostream>
using namespace std;

void housing(int arr[],int n,int k){
    int i=0;
    int j=0;
    int cs=0;

    while(j<n){
        cs+=arr[j];
        j++;
        while(cs>k and i<j){
            cs=cs-arr[i];
            i++;
        }

        if(cs==k){
            cout<<i<<"-"<<j-1<<endl;
        }
    }

    return;
}

int main (){
    cout<<"enter the no of plot :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enetr the area of the plot :"<<endl;
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }

    int k;
    cout<<"enter the area u want to purchage :"<<endl;
    cin>>k;
    cout<<"u get the area btwn the folowing number :"<<endl;
    housing(arr,n,k);
    return 0;
    
}