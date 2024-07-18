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
	//TODO : Compléter
	return -1;	
}

void DataStructure::setFirstNode(Node* node)
{
	this->firstNode = node;
}

Node* DataStructure::getFirstNode() const
{
	return this->firstNode;
}