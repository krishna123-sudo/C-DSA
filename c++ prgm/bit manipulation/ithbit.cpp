#include<iostream>
using namespace std;
int getithbit(int n,int i);
int main (){
    int n=5;
    int i;
    cout<<"enetr the position :"<<endl;
    cin>>i;
    cout<<getithbit(n,i);
    cout<<endl;
    return 0;
}

int getithbit(int n,int i)
{
    int mask=(1<<i);

    return (n&mask)>0 ?1 :0;
}