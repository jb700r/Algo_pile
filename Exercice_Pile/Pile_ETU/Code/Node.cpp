#include "stdafx.h"
#include "Node.h"

Node::Node()
{
}


Node::~Node()
{
}

Node* Node::getNext() const
{
	return this->next;
}

void Node::setNext(Node* _next)
{
	this->next = _next;
}

Book * Node::getBook() const
{
	return this->book;
}

void Node::setBook(Book * _book)
{
	this->book = _book;
}


