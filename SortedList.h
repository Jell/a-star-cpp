#ifndef CGI_SORTLIST_H
#define CGI_SORTLIST_H

#include<stdlib.h>
#include<stdio.h>
#include "Node.h"

typedef struct slist
{
	int value;
	Node * myNode;
	struct slist *next;
} slist ;


class SortedList{
	private:
		slist *Mysl;

	public:
		SortedList();
		~SortedList();

		void Insert(Node *);
		Node * Pop();
		void Clear();
		int Length();
		void View();
};

#endif
