#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
   int count=0;
   for(int i=0;big[i]!='\0';i++){
       count++;
   }
    vector<int> result;
    int index=big.find(small,index);
    while(index!=-1){
        result.push_back(index);
        index=big.find(small,index+1);
    }
   return result;

}

int main (){
    string big= "I liked the movie, acting in movie was great!";
    string small = "movie";
    //vector<int> ans;
    auto ans=stringSearch(big,small);
    for(auto v:ans){
        cout<<v<<",";
    }
    return 0;
}
