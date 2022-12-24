#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int height_mauntain(vector<int> arr){

    int n=arr.size();
    int largest=0;
//for calculating the count
    
    for(int i=1;i<=n-2;){
    if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
        int count=1;
        int j=i;

        while(j>=1 and arr[j]>arr[j-1])
        {
            j--;
            count++;
        }
        while(i<=n-2 and arr[i]>arr[i+1]){
            i++;
            count++;
        }
        largest=max(largest,count);
    }else
    {
        i++;
    }

  
    }
      return largest;
}

int main (){

    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
   
     cout<<height_mauntain(arr);


}