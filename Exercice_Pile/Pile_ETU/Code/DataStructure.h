#pragma once
#include "Node.h"
class DataStructure
{
public:
	DataStructure();
	~DataStructure();
	//Virtuelle pure (= 0), pas � d�finir dans la classe DataStructure,
	//mais � red�finir obligatoirement dans les sous-classes
	//Possibilit� de polymorphisme !
	virtual void display() const = 0;
	int getNumNodes() const;
	Node* getFirstNode() const;
protected:
	void setFirstNode(Node* node);
private:
	Node* firstNode;
};
