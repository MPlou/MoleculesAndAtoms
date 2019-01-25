#include "pch.h"
#include "pch.h"
#include <iostream>
#include <assert.h>
#include "Atom.h"
#include "Molecule.h"
#include "H2O.h"
#include "Gas.h"

int main()
{
	const Atom h("H", 1);
	std::cout << "Helium: " << h.GetName() << " " << h.GetMass() << std::endl;

	Atom* pO = new Atom("O", 8);
	const H2O h2o;

	{
		Molecule m;
		m.AddAtom(&h);
		m.AddAtom(&h);
		m.AddAtom(pO);

		assert(m.GetMass() == h2o.GetMass());
	}

	delete pO;
	return 0;
}

//Exercise 2
int GetDistinctsAtomsCount(const Gas& gas)
{
	std::list<const Molecule*> molecules;
	std::list<const Atom*> atoms;
	std::list<const Molecule*>::const_iterator molecule_it;
	std::list<const Atom*>::const_iterator atom_it;
	std::list<std::string> atoms_names;
	int nb_atoms = 0;
	std::string atom_name;

	molecules = gas.GetMolecules();
	for (molecule_it = molecules.begin(); molecule_it != molecules.end(); ++molecule_it) {
		atoms = (*molecule_it)->GetAtoms();
		for (atom_it = atoms.begin(); atom_it != atoms.end(); ++atom_it) {
			atom_name = (*atom_it)->GetName();
			std::list<std::string>::iterator findIter = std::find(atoms_names.begin(), atoms_names.end(), atom_name);
			if (findIter != atoms_names.end()) {
				atoms_names.push_back(atom_name);
				nb_atoms++;
			}
		}
	}
	return nb_atoms;
}