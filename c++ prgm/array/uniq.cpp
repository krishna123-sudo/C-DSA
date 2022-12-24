#include<iostream>
#include<vector>
using namespace std;

void findchar(char input[],int n){
        vector<int> result;
        //n=5;
        result.push_back(input[0]);
        int i=0;
        int j=0;
        while(j+1<n)
        {
                if(result[i]==input[j])
                {
                    continue;
                    j++;
                }else 
                {
                    i=0;
                    while(i<result.size())
                    {
                        if(result[i]!=input[j])
                         {
                          result.push_back(input[j]);
                          j++;
                          i++;
                          }
                    }
                }
        }

        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
}

int main (){
    int n=5;
    char input[5]={'a','a','b','c','b'};
    findchar(input,n);

    return 0;
}