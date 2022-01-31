#include <iostream>
#include "FeuTricoloreAnglais.h"
#include "FeuTricoloreFrancais.h"

int main()
{
	// France
	std::cout << "------ - France------------------" << std::endl;
	FeuTricolore * feutricolore = new FeuTricoloreFrancais(FeuTricolore::State::vert);
	FeuTricolore::State state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;

	// France good setState
	std::cout << "------- France setState good------------------" << std::endl;
	feutricolore->setState(FeuTricolore::jaune);
	

	// France bad setState
	std::cout << "------ - France setState bad------------------" << std::endl;
	try {
		feutricolore->setState(FeuTricolore::vert);
	}
	catch (...)
	{
		std::cout << "exception handled bad setState" << std::endl;
	}
	

	// Angleterre
	std::cout << "------- Angleterre ------------------" << std::endl;
	feutricolore = new FeuTricoloreAnglais(FeuTricolore::State::vert);
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;
	feutricolore->moveState();
	state = feutricolore->getState();
	std::cout << state << std::endl;


	// France good setState
	std::cout << "------- Angleterre setState good------------------" << std::endl;
	feutricolore->setState(FeuTricolore::jaune);


	// France bad setState
	std::cout << "------ - Angleterre setState bad------------------" << std::endl;
	try {
		feutricolore->setState(FeuTricolore::vert);
	}
	catch (...)
	{
		std::cout << "exception handled bad setState" << std::endl;
	}

	delete feutricolore;

	return 0;
}