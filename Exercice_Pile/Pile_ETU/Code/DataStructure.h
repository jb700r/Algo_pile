#pragma once
#include "Node.h"
class DataStructure
{
public:
	DataStructure();
	~DataStructure();
	//Virtuelle pure (= 0), pas à définir dans la classe DataStructure,
	//mais à redéfinir obligatoirement dans les sous-classes
	//Possibilité de polymorphisme !
	virtual void display() const = 0;
	int getNumNodes() const;
	Node* getFirstNode() const;
protected:
	void setFirstNode(Node* node);
private:
	Node* firstNode;
};
