#pragma once
#include <string>

using namespace std;

class Book
{
	public:
		Book(unsigned int _id, string _title, unsigned int _year);
		~Book();
		void display() const;
	private:
		unsigned int id;
		string title;
		unsigned int year;
};

