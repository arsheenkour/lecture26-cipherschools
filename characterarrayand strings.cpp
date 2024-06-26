//character array and strings
#include<iostream>
using namespace std;
int main()
{
	char name[1000];
	cout<<"enter the name (Note: Enter # after the end of your name:)";
	int i=0;
	while(1)
	{
		cin>>name[i];
		if(name[i]== '#')
		break;
		i++;
	}
	i=0;
	cout<<"The name you have just signed entered is"<<endl;
	while(name[i]!='#')
	{
		cout<<name[i];
		i++;
	}
}