#include "stdafx.h"
#include "CSWoman.h"
#include "Node.h"

Node::Node(CSWoman* woman, Node* next) :
	woman_(woman), next_(next)
{
}

Node* Node::get_next()
{
	return next_;
}

const CSWoman* Node::get_woman() const
{
	return woman_;
}

void Node::set_next(Node* next)
{
	next_ = next;
}
