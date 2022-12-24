#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }

    v.erase(v.begin()+3);
    cout<<"the resultant vector is :"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    for(int x: v){
        cout<<x<<" ";
    }

}