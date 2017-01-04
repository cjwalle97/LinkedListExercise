#pragma once
#include <iostream>

template<typename Type>
struct LinkedListNode
{
	Type data;
	LinkedListNode<Type> *link;
};

template<typename Type>
class LinkedList
{
private:
	Type list;
	int count;
	LinkedListNode<Type> Start;
	LinkedListNode<Type> End;
public:
	LinkedList() {};
	// Name: Find
	// Type: LinkedList
	// find and get the node at the specific index
	LinkedList Find(int index)
	{
		return list[index];
	}
	// Name: AddStart
	// Type: void
	// Description: add a new node to Start
	void AddStart(LinkedListNode<Type> addition)
	{
		Start = addition;
	}
	// Name: AddEnd
	// Type: void
	// Description: add a new node to End
	void AddEnd(LinkedListNode<Type> addition)
	{
		End = addition;
	}
	// Name: Add
	// Type: void
	// Description: add a new node at the index
	void Add(LinkedListNode<Type> addition, int num)
	{
		list[num] = addition;
	}
	// Name: Add
	// Type: void
	// Description: add a new node at the index after
	void AddAfter(LinkedListNode<Type> addition, int num)
	{
		for (int i = 0, i < num + 1; i++)
		{
			list[i] = addition;
		}
	}
	// Name: Remove
	// Type: void
	// Description: remove the node from the index
	void Remove(int num)
	{
		list[num] = NULL;
	}
	// Name: Delete
	// Type: void
	// Description: remove all the nodes in the list
	void Delete()
	{
		for (int i = 0; i != End; i++)
		{
			list[i] = NULL;
		}
	}
	// Name: Swap
	// Type: void
	// Description: swaps the data within 2 nodes
	void Swap(int a, int b)
	{
		LinkedListNode a = list[a];
		LinkedListNode b = list[b];
		LinkedListNode temp = b;
		b = a;
		a = temp;
	}
};

int main()
{

}