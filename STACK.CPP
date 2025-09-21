#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

class Stack{
public:
    int n,top;
    int s[20];
    Stack(){
	n =5;
	top = -1;
    }
    Stack(int no){
	n=no;
	top=-1;
    }
    void push(int data){
	if(top==n-1)
	{
	    cout<<endl<<"Stack overflow";
	    return;
	}
	top++;
	s[top]=data;
    }
    int pop(){
	int data;
	if(top==-1){
	    cout<<endl<<"Stack overflow";
	}
	data=s[top];
	top--;
	return data;
    }
    int peep(){
	int i, data;
	cout<<"Which element do you want?: ";
	cin>>i;
	if((top-i+1)<0){
	    cout<<endl<<"Stack underflow on peep";
	    return 0;
	}
	data=s[top-i+1];
	return data;
    }
    void change (int data){
	int i;
	cout<<"Which element you want to change?: ";
	cin>>i;
	if((top-i+1)<0){
	    cout<<"Stack underflow on change";
	}
	s[(top-i+1)]=data;
    }
    void display(){
	if(top==-1){
	    cout<<endl<<"Stack is empty";
	}
	else{
	    cout<<"The contents of the stack is: " ;
	    for(int i=top; i>=0;i--)
            {
		cout<<"\n\t"<<s[i];
            }
        }
    }
};

void main(){
    int e,ch;
    Stack s;
    do{
        cout<<"\n\t Stack Implementation";
        cout<<"\n\t 1.Push";
        cout<<"\n\t 2. Pop";
        cout<<"\n\t 3. Display";
        cout<<"\n\t 4. Peep";
        cout<<"\n\t 5. Change";
        cout<<"\n\t 6. Exit";

        cout<<"\n\t Enter choice:";
        cin>>ch;
        
        switch(ch){
            case 1: 
		cout<<"\n Enter element:";
	      //	flushall();
                cin>>e;
		s.push(e);
                break;
                case 2:
                    e=s.pop();
                    if(e!=0)
                    cout<<"\n the deleted element is "<<e;
                    break;
                case 3:
                    s.display();
                    break;
                case 4:
                    e=s.peep();
                    if(e!=0)
                    cout<<"\n the selected element is "<<e;
                    break;
                case 5:
                    cout<<"\n enter new element:";
		  //  flushall();
                    cin>>e;
                    s.change(e);
                    break;
                case 6:
                    exit(0);
                default:
                    cout<<"\n wrong choice";
        }
	getch();
    }while(ch!=6);
}