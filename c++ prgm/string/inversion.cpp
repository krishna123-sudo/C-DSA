#include<iostream>
#include<vector>
using namespace std;

int  merge(int x[],int y[],int arr[],int s,int e){

    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    int k=s;
    int count=0;
    while(i<=mid and j<=e){
        if(x[i]<y[j]){
            arr[k]=x[i];
            i++;
            k++;
        }else
        {
            count+=(mid-i+1);
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

    return count;

}

int  count_inversion(int arr[],int s,int e)
{
    if(s>=e){
        return 0;
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

    int c1=count_inversion(x,s,mid);
    int c2=count_inversion(y,mid+1,e);
    int ci=merge(x,y,arr,s,e);

    return c1+c2+ci;
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

   cout<< count_inversion(arr,s,e)<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}