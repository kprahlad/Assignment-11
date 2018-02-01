#include<iostream>
using namespace std;
int arr[100],top=-1;
void push(int data)
{
	if(top==100) cout<<"\n\nOverflow!"; //Too may stuff!
	else
	{
		top++;
		arr[top]=data; //Add data to the top after moving the top
		cout<<"\n\nPushed!";
	}
}
void pop()
{
	if(top==-1) cout<<"\n\nNo Stack!";
	else 
	{
		top--; //Move the top below
		cout<<"\n\nPopped!";
	}
}
void print() //Print. Duh.
{
	if(top==-1) cout<<"\n\nNo Stack!";
	else
	{
		for(int i=top;i>-1;i--) cout<<arr[i]<<" ";
	}
}
int main()
{
	int ch=1,data;
	while (ch)
	{
		cout<<"\n\nEnter 1 to Push, 2 to Pop, 3 to Print and 0 to Exit. : "; //Menu!
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"\n\nEnter the data to be added : ";cin>>data;push(data);break;
			case 2 : pop();break;
			case 3 : print();break;
			case 0 : cout<<"\n\nThanks!";break;
			default : cout<<"\n\nIncorrect option!"; 
		}
	}
	return 0;
}
