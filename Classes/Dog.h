#pragma once
#include "Organism.h"
class Dog : public Organism
{
    void Read(std::ostream& ostream, std::istream& istream) {
        Organism::Read(ostream, istream);
        ostream << "Enter Name: ";
        istream >> name;
    }
    void Write(std::ostream& ostream) override {
        Organism::Write(ostream);
        ostream << "Name: " << name << std::endl;
    }
    kingdom getKingdom() override { return kingdom::ANIMALIA; }
    void GainEnergy() override;

};

