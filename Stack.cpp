#include<iostream>
using namespace std;
struct node //Def. of a node
{
	int data;
	node *next;
};
class stackLL
{
	node * top; //Create a node pointer called top
	public:
	 stackLL()
	 {
	 	top = NULL;
	 }
	 void print();
	 void push(int data);
	 void pop();
}ob; //Create a stack
void stackLL::print() //Print the stuff out. Duh.
{
	if(top==NULL) cout << "\n\nNo Stack!";
	 else 
	 {
	 	cout<<endl<<endl;
	 	node *temp=top;
	 	while(temp)
	 	{
	 		cout<<temp->data<<" ";
			temp=temp->next;	
		}
	 }
}
void stackLL::push(int data)
{
	node *temp= new node;
	if(!temp) cout<<"\n\nStack Overflow!"; //If there's no place to create a new node, Oh no!
	 else
	 {
	 	temp->data=data;
	 	temp->next=top; 
	 	top=temp; //Add the stuff to the top, and move the top pointer to that place.
	 	cout<<"\n\nPushed into the Stack!";
	 }
}
void stackLL::pop()
{
	if(!top) cout<<"\n\nNo Stack!";
	 else
	 {
	 	node *temp=top;
	 	top=top->next; //Move the top to what it's pointing to.
	 	cout<<"\n\nPopped out of the Stack!";
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
			case 1 : cout<<"\n\nEnter the data to be added : ";cin>>data;ob.push(data);break;
			case 2 : ob.pop();break;
			case 3 : ob.print();break;
			case 0 : cout<<"\n\nThanks!";break;
			default : cout<<"\n\nIncorrect option!"; 
		}
	}
	return 0;
}
