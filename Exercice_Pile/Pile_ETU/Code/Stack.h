#pragma once
#include "Node.h"
#include "Book.h"
#include "DataStructure.h"

using namespace std;

class Stack : public DataStructure
{
	public:
		Stack();
		~Stack();
		Book* pop();
		void push(Book* book);
		void display() const override;
};

