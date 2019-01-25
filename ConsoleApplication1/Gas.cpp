#include "pch.h"
#include "Gas.h"

std::list<const Molecule*> Gas::GetMolecules() const
{
	return molecules;
}

void Gas::AddMolecule(const Molecule* molecule) {
	molecules.push_back(molecule);
}

Gas::Gas()
{
}

Gas::~Gas()
{
}
