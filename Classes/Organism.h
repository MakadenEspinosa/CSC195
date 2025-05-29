#pragma once
#include <iostream>
class Organism
{
public:
	std::string name;
	int energy;
	enum class kingdom {
		PLANTAE = 0,
		ANIMALIA = 1,
		FUNGI,
		PROTISTA
	};
	Organism() : energy { 100 }{};
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	virtual void GainEnergy() = 0;

	std:: string getName() { return name; }
	virtual kingdom getKingdom() = 0;

private:
	void setName(std::string inName)
	{
		name = inName;
	}


};

