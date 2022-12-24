#include<iostream>
using namespace std;
void clearbit(int &n,int i);
int main (){
    int n=13;
    int i;
    cin>>i;
    clearbit(n,i);
    cout<<n<<endl;

    return 0;
}

void clearbit(int &n,int i)
{
    int mask=~(1<<i);
    n= n&mask;
}