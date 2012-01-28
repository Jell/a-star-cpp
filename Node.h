#ifndef NODE_H
#define NODE_H

#include<stdlib.h>
#include<stdio.h>

class Node{
	private:

	public:
		int i;
		int j;

		int f;
		int g;
		int h;

		Node *parent;

		Node(int, int, int, int, int, Node *);
		~Node();
};


#endif
