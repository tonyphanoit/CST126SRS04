#pragma once
#include "stdafx.h"
#include "CSWoman.h"

class Node
{
private:
	Node* next_;
	CSWoman* woman_;

public:
	Node(CSWoman* woman, Node* next);
	Node* get_next();
	const CSWoman* get_woman() const;
	void set_next(Node* next);
};