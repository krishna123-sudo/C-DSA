#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector <int> >  triplet(vector<int> arr,int sum){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int> > result;
        for(int i=0;i<n-3;i++){
            int s=i+1;
            int e=n-1;
        //two pointer approach
            while(s<e){
                int current_sum=arr[i];
                current_sum+=arr[s];
                current_sum+=arr[e];

                if(current_sum==sum){
                    result.push_back({arr[i],arr[s],arr[e]});
                    s++;
                    e--;
        
                }else if(current_sum>sum){
                    e--;
                }else
                {
                    s++;
                }
            }
        }

          
        return result;
    
}
int main ()
{
    int n,temp;
    cout<<"enetr the no of elemnt :"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"enter the array elemnt :"<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
       arr.push_back(temp);
    }
    int sum;
    cout<<"enter the value pf sum :"<<endl;
    cin>>sum;

    auto ans=triplet(arr,sum);
    for(auto v: ans)
    {
        for(auto no:v){
            cout<<no<<",";
        }
        cout<<endl;
    }

    return 0;
}