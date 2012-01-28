#include <stdlib.h>
#include "Node.h"

Node::Node(int I, int J, int F, int G, int H, Node *p) {
	i = I;
	j = J;

	f = F;
	g = G;
	h = H;

	parent = p;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}
