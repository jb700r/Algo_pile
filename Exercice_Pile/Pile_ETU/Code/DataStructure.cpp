#include "stdafx.h"
#include "DataStructure.h"

DataStructure::DataStructure() : firstNode(NULL)
{
}

DataStructure::~DataStructure()
{
}

int DataStructure::getNumNodes() const
{
	//TODO : Compl�ter
	Node* current = firstNode;
	int i = 0;
	while (current->getNext() != NULL)
	{
		i++;
		current = current->getNext();
	}
	return i+1;	
}

void DataStructure::setFirstNode(Node* node)
{
	this->firstNode = node;
}

Node* DataStructure::getFirstNode() const
{
	return this->firstNode;
}