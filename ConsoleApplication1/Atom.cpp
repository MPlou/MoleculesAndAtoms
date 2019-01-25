#include "pch.h"
#include "Atom.h"

Atom::Atom(std::string _name, double _mass)
{
	name = _name;
	mass = _mass;
}

std::string Atom::GetName() const
{
	return name;
}

std::ostream& Atom::GetName(std::ostream &stream) const
{
	stream << name;
	return stream;
}

std::ostream& Atom::GetMass(std::ostream &stream) const
{
	stream << mass;
	return stream;
}

double Atom::GetMass() const
{
	return mass;
}

Atom::~Atom()
{
}
