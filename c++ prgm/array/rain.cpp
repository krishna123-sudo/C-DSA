#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compute_water(vector<int> heights){
    int n=heights.size();
    if(n<=2){
        return 0;
    }
    //asign all at 0 initialy
    
    vector<int> left(n,0),right(n,0);


     left[0]=heights[0];
     right[n-1]=heights[n-1];

    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],heights[i]);
        //right[n-i-1]=max(right[n-i],heights[n-i-1]);
    }

    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],heights[i]);
    }

    int water=0;
    for(int i=0;i<n;i++){
        water+=min(left[i],right[i])-heights[i];
    }

    return water;
}

int main (){
    vector<int> heights{4,2,0,3,2,5};
    cout<<compute_water(heights)<<endl;
}