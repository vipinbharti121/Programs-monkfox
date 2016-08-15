#include<iostream>
#include<conio.h>
using namespace std;


struct node{
	int value;
	node *next;
}*start=NULL,*ptr;

void add(int data)
{
	node *n = new node();
	if(start==NULL)
	start=n;
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		ptr=ptr->next;

		ptr->next=n;
	}
	n->next=NULL;
	n->value=data;
	cout<<"NODE SUCCESSFULLY ADDED\n";
}

void display()
{
	ptr=start;
	while(ptr!=NULL)
	{
	cout<<"NODE \t"<<ptr->value<<"\n";
	ptr=ptr->next;
		}
}

int kthLastElement(node *head, int k){
    node *temp = head;
    int count = 0;
    int num = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    node = *temp = head;
    int t = 0;
    while(temp != NULL){
        if(t == count-k+1){
            num = temp->value;
            return num;
        }
        else{
            temp = temp->next;
            t++;
        }
    }
}

int main()
{
	int i=0;
	int n,num;


	while(i==0)
	{
		cout<<"PRESS 1 : ADD NODE \n";
		cout<<"PRESS 2 : DISPLAY NODE\n";
		cout<<"PRESS 3 : SWAP TWO CONSECUTIVE NODE \n";
		cout<<"PRESS 4 : Delete a Node\n";
		cout<<"PRESS 5 : Sort the list\n";
		cout<<"PRESS 6 : Reverse the list\n";
		cout<<"PRESS 7 : Seperate Even and Odd\n";
		cout<<"PRESS 8 : EXIT\n";
		cout<<"Enter Input : \t";
		cin>>n;

		switch(n)
		{
			case 1 : cout<<"Enter the value of the node \n";
						cin>>num;
						add(num);
						break;

			case 2 : display();
						break;

			case 3 : swap();
						break;

			case 4 :	display();
						cout<<"Enter Number you want to delete\n";
						cin>>num;
						deleted(num);
						break;

			case 5 :    sort();
						break;
			case 6 :    reverse();
						break;
			case 7 : 	evenodd();
						break;

			case 8 : cout<<" BBYE \n";
						i=1;
						break;
		}


	}




	getch();
	return 0;
}
