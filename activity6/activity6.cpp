#include <iostream>
using namespace std;

struct Node
{
	int noMha;
	string name;
	Node* next;
	Node* prev;
};

Node *START = NULL;

void addNode()
{
	Node* newNode = new Node(); // step 1: create a new node
}