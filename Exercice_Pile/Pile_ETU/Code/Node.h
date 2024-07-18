#pragma once
#include "book.h"

class Node
{
public:
	Node();
	~Node();
	Node * getNext() const;
	void setNext(Node* _next);
	Book * getBook() const;
	void setBook(Book * _book);
	
private:
	Book * book;
	Node* next;

};

