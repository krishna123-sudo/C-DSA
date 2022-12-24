#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void max_subarrayK(vector<int> a,int k){
    int n=a.size();
    deque<int > q(k);

    for (int i = 0; i < k; i++)
    {
            while(!q.empty()  and a[i]>a[q.back()]){
                q.pop_back();
            }

            q.push_back(i);
    }

    for(int i;i<=n;i++){

        cout<<a[q.front()]<<" ";

        while(!q.empty() and q.front()<=i-k){
            q.pop_front();
        }

         while(!q.empty()  and a[i]>a[q.back()]){
                q.pop_back();
            }
        q.push_back(i);
    }
    
}

int main (){
    vector<int> s{1,2,3,1,4,5,2,3,6};
    int k=3;
    max_subarrayK(s,k);
}