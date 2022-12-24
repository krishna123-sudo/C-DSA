#include<iostream>

using namespace std;

void prime(int n)
{
	int i = 2;
    
    int j;
	
	
	while (i <= n)
   	{    
        int count=0;
   		
    	if(n % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				count++;
				}
				j++;
			}
			if(count == 2)
			{
				cout << i<<endl;
			} 
      	}
    	i++;
   	}
}

int main (){
    int n;
    cin>>n;

    prime(n);

}