#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largestband(vector<int> arr){
    int n=arr.size();

    unordered_set<int> s;

    for(int x:arr){
        s.insert(x);
    }
    int largest=1;
     

    for(auto elem :s){
        int parent=elem-1;
        if(s.find(parent)==s.end()){
            int next_no=elem+1;
           int count=1;
        
        while(s.find(next_no)!=s.end()){
            next_no++;
            count++;
        }

        if(count>largest){
    largest=count;
             }

        }
    }

    return largest;

}
int main (){
    vector<int> arr{0,2,1,3,5,6,7,8,9,10};
    cout<<largestband(arr);

    return 0;
}