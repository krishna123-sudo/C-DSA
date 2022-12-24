#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int countmin_swap(vector<int> arr){
    int n=arr.size();
   int ans=0;
    pair<int,int> ap[n];
    for(int i=0;i<n;i++){
        ap[i].first=arr[i];
        ap[i].second=i;
    }

    sort(ap,ap+n);

    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        int old_pos=ap[i].second;

        if(visited[i]==true){
            continue;
        }
        int node=i;
        int cycle=0;

        while(!visited[node]){
            visited[node]=true;
            int nextnode=ap[i].second;
            node=nextnode;
            cycle+=1;
        }

       ans=ans+(cycle-1);
    }

return ans;

}

int main (){

    vector<int> arr{4,3,1,2};
   cout<<countmin_swap(arr)<<endl;
}
