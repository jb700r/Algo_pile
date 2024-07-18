#include "stdafx.h"
#include "Stack.h"
#include <iostream>

Stack::Stack()
{
}

Stack::~Stack()
{
    //TODO : Detruire la pile selon les sp�cifications
}

void Stack::push(Book* book)
{
    //TODO : Empiler selon les sp�cifications
    Node* newNode = new Node();

    //mettre le book dans le node
    newNode->setBook(book);

    //le next du nouveau devien le premier
    newNode->setNext(getFirstNode());

    //premier change pour le nouveau qui arrive
    setFirstNode(newNode);
}

Book* Stack::pop()
{
    Book* book = NULL;
    //TODO : D�piler selon les sp�cifications

    //mettre first = au next et return le premier node->getbook

    return book;
}

void Stack::display() const
{
    //TODO : Afficher toutes les donn�es de la Pile
}
