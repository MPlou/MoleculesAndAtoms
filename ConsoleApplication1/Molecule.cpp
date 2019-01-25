#include "pch.h"
#include "Molecule.h"

std::list<const Atom*> Molecule::GetAtoms() const {
	return atoms;
}

void Molecule::AddAtom(const Atom* atom) {
	atoms.push_back(atom);
}

double Molecule::GetMass() const
{
	std::list<const Atom*>::const_iterator it;
	double total_mass = 0;

	for (it = atoms.begin(); it != atoms.end(); ++it) {
		total_mass += (*it)->GetMass();
	}
	return total_mass;
}

std::ostream& Molecule::GetMass(std::ostream &stream) const
{
	stream << GetMass();
	return stream;
}

Molecule::Molecule()
{
}


Molecule::~Molecule()
{
}
