#pragma once
#include "stdafx.h"
#include "CSWoman.h"
#include "Node.h"

struct LinkedList
{
	Node* head = nullptr;
	void AddWoman(CSWoman* woman);
	void PrintList();
	void reverse();
	void DeleteList();
};
