#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsCode
{		
	TEST_CLASS(TestsPile)
	{
	public:
		
		//Test getFirstNode sur une pile vide, doit retourner un pointeur NULL.
		TEST_METHOD(shouldHaveNullFirstNodeWhenStackIsEmpty)
		{
			//Devrait marcher initialement
			Stack p;			
			Assert::IsTrue(p.getFirstNode() == NULL);
		}

		//Test getNumNodes sur une pile vide, doit retourner 0.
		TEST_METHOD(shouldHave0NodesWhenStackIsEmpty)
		{
			//TODO : Compléter la méthode getNumNodes() d'abord
			Stack p;
			Assert::IsTrue(p.getNumNodes() == 0);
		}
		//Test de contenu sur un push sur une pile vide, doit retourner le bon livre.
		TEST_METHOD(shouldHaveValidContentWhenPushing1BookOnEmptyStack)
		{
			//TODO : Compléter la méthode push d'abord
			Stack p;
			Book* b1 = new Book(1, "allo", 1990);

			p.push(b1);

			//On compare les addresses en mémoire, doivent être forcément les mêmes
			Assert::IsTrue(b1 == p.getFirstNode()->getBook());

			delete b1;
		}


		//TODO : Développer les autres tests

		//Exemples :
		//Test un push sur pile vide (verifier numNodes)
		//Tester un Pop d'une pile vide (verifier contenu et numNodes)
		//Tester un Push sur une pile non vide (verifier contenu et numNodes)
		//Tester Pop d'une pile non vide (verifier contenu et numNodes)
		//Tester plusieurs Push (verifier contenu et numNodes)
		//Tester plusieurs Pop (verifier contenu et numNodes)
		//Tester pointeur suivant de fin de Pile (doit être NULL)
		//Vous devez implémenter tous les tests visant à mettre à l'épreuve votre structure

	};
}