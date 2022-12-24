#include<iostream>
#include<vector>
using namespace std;

int rotated(vector<int> arr,int key){
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }

        if(arr[s]<=arr[mid]){
            if(key>=arr[s] and key<=arr[mid]){
                e=mid-1;
            }else
            {
                s=mid+1;
            }
        }

        if(arr[s]>=arr[mid]){
            if(key>=arr[mid+1] and key<=arr[e]){
                s=mid+1;
            }else
            {
                e=mid-1;
            }
        }
    }

    return -1;
}

int main (){
    //vector<int> arr{7,9,10,1,2,3,4,5,6};
    vector<int> arr;
    int n;
    cin>>n;
    int temp;
    for (int i = 0; i < n; i++)
    {
            cin>>temp;
            arr.push_back(temp);
    }
    
    int key;
    cin>>key;
    cout<<"the value "<<key<<" is present at position :"<<endl;
    cout<<rotated(arr,key);
    cout<<endl;

    return 0;

}