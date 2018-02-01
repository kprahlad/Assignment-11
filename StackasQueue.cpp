#include<iostream>
using namespace std;
struct node //Def. of node
{
	int data;
	node *next;
};
class stackLL
{
	public:
	node * top;
	stackLL()
	{
		top = NULL;
	}
	void print();
	void push(int data);
	void pop();
}ob,ob2; //Create 2 stacks
void stackLL::print() //Print the stuff out.
{
	if(top==NULL) cout << "\n\nNo Queue!";
	 else 
	 {
	 	cout<<endl<<endl;
	 	node *temp=top;
	 	ob2.top=NULL; //Refresh the second stack.
	 	while(temp) //Add all the elements of the first stack into the second. The second stack, thus, will be in reverse order.  
	 	{
	 		ob2.push(temp->data);
			temp=temp->next;	
		}
		temp=ob2.top;
	 	while(temp) //Print the second stack as we need it in FIFO order. 
	 	{
	 		cout<<temp->data<<" ";
			temp=temp->next;	
		}
	 }
}
void stackLL::push(int data) //Add the data to the end of Queue, that is, the top.
{
	node *temp= new node;
	if(!temp) cout<<"\n\nOverflow!"; //No space to make a new node!
	 else
	 {
	 	temp->data=data;
	 	temp->next=top;
	 	top=temp;
	 }
}
void stackLL::pop()
{
	if(!top) cout<<"\n\nNo Queue!"; 
	 else
	 {
	 	node *temp=top;
	 	ob2.top=NULL; //Add all the elements of the first stack into the second. The second stack, thus, will be in reverse order.  
	 	while(temp)
	 	{
	 		ob2.push(temp->data);
			temp=temp->next;	
		}
	 	ob2.top=ob2.top->next; //Delete the last element of the second stack
	 	top=NULL; //Refresh the first stack.
	 	while(ob2.top)//Add the stuff from the second stack into the first. This stack change has to be done because Queue is a FIFO structure.
	 	{
	 		push(ob.top->data);
	 		ob2.top=ob2.top->next;
		}
	 	delete temp;
	 	cout<<"\n\nPopped out of the Queue!";
	 }
}
int main()
{
	int ch=1,data;
	while (ch)
	{
		cout<<"\n\nEnter 1 to Push, 2 to Pop, 3 to Print and 0 to Exit. : "; // Menu!
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
