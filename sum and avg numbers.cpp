#include <iostream>
#include <cmath>
#include<Windows.h>
using namespace std;
//take inputs from users..
int sum( int n1 , int n2 , int n3);
float avg( int n1 , int n2  , int n3  );

int main()
{
	int x ,y,z ;
	cout<<" enter 3 numbers \n";
	cin>>x>>y>>z;
	cout<<"the sum is "<<sum(x,y,z)<< "\n";
	cout<<"the avg is "<<avg (x,y,z)<< "\n";
//take a time...
Sleep(3000);
}
//sum of numbers...
int sum( int n1 , int n2 , int n3)
{ return n1+n2+n3 ;
}
//avg for 3numbers...
float avg( int n1, int n2  , int n3 )
{ 
	return sum( n1 , n2 ,n3 )/3 ;
}
