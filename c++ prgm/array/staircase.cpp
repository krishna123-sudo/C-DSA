#include<iostream>
#include<vector>
using namespace std;

pair<int,int> search(int m, int n, vector<vector<int>> v, int k){
   
   
    int i=0; int j = n-1;

   

    if(v[0][0] > k || v[n-1][n-1] < k)

    {

        return {};

    }

   

    if(n==0) return {};

   

    while(i<n && j>=0)

    {

        if(v[i][j] == k)

        {

            return {i,j};

        }

        else if(v[i][j] > k)

        {

            j--;

        }

        else{

            i++;

        }

    }

    return {};

}

int main (){

    int m,n,k;
    pair<int,int> search();

}