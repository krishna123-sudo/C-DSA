#include<iostream>
#include<vector> 
using namespace std;
int partition(vector<int> &arr,int s,int e);
void qsort(vector<int> &arr,int s,int e){

    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);
    qsort(arr,s,p-1);
    qsort(arr,p+1,e);
    
}

int partition(vector<int> &arr,int s,int e)
{
    int i=s-1;;
    int piovat=arr[e];

    for(int j=s;j<e;j++){
        if(arr[j]<piovat){
              i++;
            swap(arr[j],arr[i]);
           
           
        }
    }

    swap(arr[i+1],arr[e]);

    return i+1;
}

int main (){
    vector<int> arr;
    int n;
    
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

     qsort(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<" ";
    }
     

     return 0;
}