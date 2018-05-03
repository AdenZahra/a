#include<iostream>
using namespace std;
void main()
{

	/*Check if number is prime or not

	int c;
	cout<<"Enter some number";
	cin>>c;
	int count=1;
	int countfact=0;
	while(count<=c)
	{
		if(c%count==0)
		{
			countfact++;
		}
		count++;
	}
	if(countfact==2)
		cout<<"Number is Prime"<<"\n";
	else
		cout<<"Number is not Prime"<<"\n";
		*/
	
	
	/*	Input 3 numbers and print them in ascending order.
	
	int n1,n2,n3;
	cout<<"Enter number 1"<<"\n";
	cin>>n1;
	cout<<"Enter number 2"<<"\n";
	cin>>n2;
	cout<<"Enter number 3"<<"\n";
	cin>>n3;

	cout<<"Ascending order is"<<"\n";

	if(n1<n2)
	{
		if(n1<n3)
		{
			if(n2<n3)
				cout<<n1<<" "<<n2<<" "<<n3;
			else
				cout<<n1<<" "<<n3<<" "<<n2;
		}
		else
		{
			if(n3<n2)
				cout<<n3<<" "<<n1<<" "<<n2;
			else
				cout<<n3;
		}
	}
	
	else
	{
		if(n1<n3)
		{

		}
		else
		{

		}
	}*/


		/*
	int i=0;
	int c=1; 
	while(i<10)
	{
	cout<<"Table of 5    "<< i+1<< "Time"<<"\n";
	c=1;
	while(c<=10)
	{
		cout<< 5*c<<"\n";
		c=c+1;
	}
	i=i+1;
	} 
	*/
	
	
	
	/*
	int n;
	cin>> n;
int z=n;
int x=0;
while(n!=0)
{
	x=x*10+n%10;
	n=n/10;
}
if(z==x)
{
	cout<< "Palindrome";
}
else
{
	cout<< "Not Palindrome";
}
*/


/*int n;
		cin>>n;
int i=0;
int x=1;
int bin=0;
while( n>0)
{
	bin = bin + (n%2) *x ;
	n=n/2;
	x=x*10;
}
cout<< bin;

*/


/*int k ;
float j =56.8;

cin>>j;
double d=j;
//cout << "integer:" << k << " , float: " << j;

cout<<"fddddddd" <<d;
	*/


/*	char ch;
	cin>>ch;
	cout<<"ASCII is "<<int(ch)<<"\n";
	cout << char(ch+1)<<char(ch+2);

	*/

/*	int num;
	cin>>num;
	int count=0;
	while(num>0)
	{
		
		num=num/10;
		count++;
		
	}
	cout<<count;
	if(count==2)
		cout<<"2 digit";
	else
		cout <<"Not";
		*/

		/*int num;
	cin>>num;
	for(int i=1 ; i<=num ; i++)
	{
		for(int j=1 ; j<= i ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	/*int count=1;
	int c=0;
	while(count<num)
	{
		if(num/count==count)
		{
				cout<<"square root is;"<<count;
		}
		
		count++;
	}
	cout<<"nnnnnnn"<<count;*/
	/*int num=0;
	cout<<"Enter Number";
	cin>>num;
	do
	{
		
		for(int i=1;i<=10;i++)
		{
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
		}
		cout<<"enter number";
		cin>>num;
	}while(num>0);*/
system("pause");

}