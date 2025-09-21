#include<iostream.h>
#include<conio.h>
class queue
{
	int front;
	int rear;
	int arr[5];
public:
	queue()
	{
		front=-1;
		rear=-1;
	}
	int isEmpty()
	{
		if(front== -1 && rear == -1){
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isFull()
	{
			if(rear==5-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	void insert(int data)
	{
		if(isFull())
		{
			cout<<"Queue is full"<<endl;
		return;
		}
		else if(isEmpty())
		{
			front=0;
			rear=0;
		}
		else
		{
			rear++;

		}
		arr[rear]=data;
	}

	int pop()
	{
		int x=0;
		if(isEmpty()){
		cout<<"Queue is empty"<<endl;
		return 0;
		}
		else if(front == rear)
		{
			x=arr[front];
			arr[front]=0;
			rear=-1;
			front=-1;
			return x;
		}
		else
		{
			x=arr[front];
			arr[front]=0;
			front++;
			return x;
		}
	}
	int count()
	{
		return(rear-front+1);
	}
	void display()
	{
		cout<<"All the values in the queue are"<<endl;
		for(int i=front; i<=rear; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	int peep()
	{
		int i,data;
		cout<<"Which element u want"<<endl;
		cin>>i;
		data=arr[rear-i+1];
		return data;
	}
};

int main()
{
	queue q1;
	int option,value;
	clrscr();

	do
	{
		cout<<"\n\n-Queue Implementaion- \n\n ";
		cout<<"1. Insert"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. isEmpty"<<endl;
		cout<<"4. isFull"<<endl;
		cout<<"5. count"<<endl;
		cout<<"6. display"<<endl;
		cout<<"7. Clear Screen"<<endl;
		cout<<"8. Peep";

		cin>>option;
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter an item to insert"<<endl;
				cin>>value;
				q1.insert(value);
				break;
			case 2:
				cout<<"Popped item: "<<q1.pop()<<endl;
				break;
			case 3:
				if(q1.isEmpty())
				{
					cout<<"Queue is empty"<<endl;
				}
				else
				{
					cout<<"Queue is not empty"<<endl;
				}
				break;
			case 4:
				if(q1.isFull())
				{
					cout<<"Queue is full"<<endl;
				}
				else
				{
					cout<<"Queue is not full"<<endl;
				}
				break;
			case 5:
				cout<<"The number of elements are: "<<q1.count()<<endl;
				break;
			case 6:
				cout<<"The elements are: ";
				q1.display();
				break;
			case 7:
				clrscr();
				break;
			case 8:
				value=q1.peep();
				if(value!=0){
					cout<<"The selected element is: "<<value;
					break;
				}

			default:
				cout<<"Select number from the given list"<<endl;

		}
	}while(option!=0);
	getch();
	return 0;
}