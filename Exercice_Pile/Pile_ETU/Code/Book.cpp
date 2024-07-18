#include "stdafx.h"
#include <iostream>
#include "Book.h"


Book::Book(unsigned int _id, string _title, unsigned int _year)
	: id(_id), title(_title), year(_year)
{

}


Book::~Book()
{
}

void Book::display() const
{
		cout << "Id : " << this->id << endl;
		cout << "Title : " << this->title << endl;
		cout << "Year : " << this->year << endl;
		cout << "*****" << endl;
}