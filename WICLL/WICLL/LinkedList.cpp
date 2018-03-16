#include "stdafx.h"
#include "CSWoman.h"
#include "LinkedList.h"
#include <iostream>

void LinkedList::AddWoman(CSWoman* woman)
{
	auto const new_node = new Node(woman, head);
	head = new_node;
}

void LinkedList::PrintList()
{
	auto * current = head;

	while (current != nullptr)
	{
		std::cout << current->get_woman()->get_name() << ", " << current->get_woman()->get_birth_year() 
				  << ", " << current->get_woman()->get_fact() << std::endl;
		current = current->get_next();
	}
	std::cout << "\n" << std::endl;
}

void LinkedList::reverse()
{
	Node* prev{ nullptr };
	auto curr{ head };
	while (curr != nullptr)
	{
		const auto next = curr->get_next();
		curr->set_next(prev);
		prev = curr;
		curr = next;
	}
	head = prev;
}

void LinkedList::DeleteList()
{
	Node * travel = head;
	Node * trail;
	while (travel != 0)
	{
		trail = travel;
		travel = travel->get_next();
		delete trail;
	}
	head = nullptr;
}
