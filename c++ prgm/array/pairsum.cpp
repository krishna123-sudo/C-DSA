#include<iostream>
using namespace std;

int pairsum(int n,int arr[],int sum){
   cout<<"the pair are :"<<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++){
           if(arr[i]+arr[j]==sum)
           {
               cout<<"{"<<arr[i]<<","<<arr[j]<<"}";
           }
       }
   }
    return 0;
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
    cout<<pairsum(n,arr,sum);

    return 0;
}