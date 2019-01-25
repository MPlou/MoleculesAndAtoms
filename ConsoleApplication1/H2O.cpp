#include "pch.h"
#include "H2O.h"


H2O::H2O()
{
	Atom* aO = new Atom("O", 8);
	Atom* aH = new Atom("H", 1);
	AddAtom(aO);
	AddAtom(aH);
	AddAtom(aH);
}

H2O::~H2O()
{
}
