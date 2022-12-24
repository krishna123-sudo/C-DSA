#include<iostream>
using namespace std;
void setithbit(int &n,int i);
int main (){
    int n=5;
    int i;
    cout<<":enetr the value of position :"<<endl;
    cin>>i;
    setithbit(n,i);
    cout<<n<<endl;

    return 0;
}

void setithbit(int &n,int i)
{
    int mask=(1<<i);
    n=(n|mask);
}