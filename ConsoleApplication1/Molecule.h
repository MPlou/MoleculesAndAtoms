#pragma once
#include "Atom.h"
#include <list>
#include <iterator>


class Molecule
{
protected:
	std::list<const Atom*> atoms;

public:
	std::list<const Atom*> GetAtoms() const;
	void AddAtom(const Atom*);
	virtual double GetMass() const;
	virtual std::ostream& GetMass(std::ostream &stream) const;
	Molecule();
	~Molecule();
};

