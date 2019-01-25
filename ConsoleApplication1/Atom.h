#pragma once
#include <string>
#include <iostream>

class Atom
{
private:
	std::string name;
	double mass;

public:
	std::string GetName() const;
	std::ostream& GetName(std::ostream &stream) const;
	double GetMass() const;
	std::ostream& GetMass(std::ostream &stream) const;
	Atom(std::string, double);
	~Atom();
};

