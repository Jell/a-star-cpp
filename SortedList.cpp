#include<stdlib.h>
#include "SortedList.h"


SortedList::SortedList() {
	Mysl = NULL;
}

SortedList::~SortedList() {
	// TODO Auto-generated destructor stub
}

void SortedList::Insert(Node *aNode)
{

	int Val = aNode->h;

	slist *tmp = NULL;
	slist *csl = Mysl;
	slist *elem = new slist;

	if(!elem) exit(EXIT_FAILURE);
	elem->value = Val;
	elem->myNode = aNode;
	while(csl && csl->value < Val)
	{
		tmp = csl;
		csl = csl->next;
	}
	elem->next = csl;
	if(tmp) tmp->next = elem;
	else Mysl = elem;
}

Node * SortedList::Pop()
{
	slist *tmp;
	Node *node;
	if(!Mysl) return NULL;
	tmp = (Mysl)->next;
	node = (Mysl)->myNode;
	free(Mysl);
	Mysl = tmp;
	return node;
}

void SortedList::Clear()
{
	slist *tmp;
	while(Mysl)
	{
		tmp = (Mysl)->next;
		free(Mysl->myNode);
		free(Mysl);
		Mysl = tmp;
	}
}

int SortedList::Length()
{
	slist *sl = Mysl;
	int n=0;
	while(sl)
	{
		n++;
		sl = sl->next;
	}
	return n;
}


void SortedList::View()
{
	slist *sl = Mysl;
	while(sl)
	{
		printf("%d\n",sl->value);
		sl = sl->next;
	}
}
