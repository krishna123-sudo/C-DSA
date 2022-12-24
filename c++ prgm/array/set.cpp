#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
//   int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         v.push_back(i);
//     }

unordered_set<int> s{1,2,3,4,5,6,7,8,9,19,18};
//unordered_set<int> s[v];
cout<<"enter the value of key :"<<endl;
int key;
cin>>key;

if(s.find(key)!=s.end()){
    cout<<key<<":is present"<<endl;
}else
{
    cout<<"not present"<<endl;
}


for(auto x :s){
    cout<<x<<" ";
}


}