#include<iostream>
#include<vector>
using namespace std;

void merge(int x[],int y[],int arr[],int s,int e){

    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    int k=s;
    while(i<=mid and j<=e){
        if(x[i]<y[j]){
            arr[k]=x[i];
            i++;
            k++;
        }else
        {
            arr[k]=y[j];
            k++;
            j++;
        }
    }

    while(i<=mid){
        arr[k]=x[i];
        k++;
        i++;
    }

     while(j<=e){
        arr[k]=y[j];
        k++;
        j++;
    }

}

void mergesort(int arr[],int s,int e)
{
    if(s>=e){
        return ;
    }


    int mid=(s+e)/2;
    int x[100];
    int y[100];

    for(int i=0;i<=mid;i++){
        x[i]=arr[i];
    }

    for(int i=mid+1;i<=e;i++){
        y[i]=arr[i];
    }

    mergesort(x,s,mid);
    mergesort(y,mid+1,e);
    merge(x,y,arr,s,e);
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }
    
    int s=0;
    int e=n-1;

    mergesort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}