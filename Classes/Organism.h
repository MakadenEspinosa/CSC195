#pragma once
#include <iostream>
class Organism
{
public:
	std::string name;
	enum class kingdom {
		PLANTAE = 0,
		ANIMALIA = 1,
		FUNGI,
		PROTISTA
	};

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	std:: string getName() { return name; }
	virtual kingdom getKingdom() = 0;

private:
	void setName(std::string inName)
	{
		name = inName;
	}


};

