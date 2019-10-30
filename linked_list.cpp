#include<bits/stdc++.h>
using namespace std;

class Node
{
	Node *next;
	int data;
public:
	void create(int);
	void insertFront(int);

};
Node* head = NULL; 
void Node::create(int k)
{
	Node *temp = new Node;
	temp->data = k;
	temp->next = NULL;
	if(head == NULL)
		head = temp;
	else
	{
		for(Node *i = head;i;i=i->next)
		{
			if(i->next == NULL)
			{
				i->next = temp;
				break;
			}
		}
	}
}

void Node::insertFront(int k)
{
	Node *temp = new Node;
	temp->data = k;
	if(head == NULL)
		head = temp;
	else
	{
		temp->next = head;
		temp = head;
	}
}


int main()
{

}