#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Please input a number:";
	cin>>num;
	
	cout<<num<<" ";

	while(num!=1)
	{
		if(num%2==1)
			num=num*3+1;	
		else
			num=num/2;
		
		cout<<num<<" ";	
	}
	cout<<endl;
	return 0;
} 
