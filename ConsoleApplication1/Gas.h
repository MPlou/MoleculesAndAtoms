#pragma once

#include "Molecule.h"
#include <list>
#include <iterator>

class Gas
{
private:
	std::list<const Molecule*> molecules;

public:
	std::list<const Molecule*> GetMolecules() const;
	void AddMolecule(const Molecule*);
	Gas();
	~Gas();
};

