#include<iostream>
using namespace std;
int arr[100],head=-1,tail=-1;
void push(int data)
{
	if(tail==100) cout<<"\n\nOverflow!"; //Too many elements!
	else
	{
		if(head==-1) head=tail=0;
		arr[tail]=data; //Make this the last element and then move the tail index to the next one
		tail++;
		cout<<"\n\nPushed!";
	}
}
void pop()
{
	if(head==-1) cout<<"\n\nNo Queue!";
	else 
	{
		head++; //Move the head index
		if(head==tail) head=tail=-1; //If the last element was deleted, reset head and tail 
		cout<<"\n\nPopped!";
	}
}
void print() //Print. Duh.
{
	if(head==-1) cout<<"\n\nNo Queue!";
	else
	{
		for(int i=head;i<tail;i++) cout<<arr[i]<<" ";
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
