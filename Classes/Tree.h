#pragma once
#include "Organism.h"
class Tree : public Organism
{
public:
    int leaves;
    Tree() : leaves{ 5 } {};
    void Read(std::ostream& ostream, std::istream& istream) {
        Organism::Read(ostream, istream);
        ostream << "Enter Name: ";
        istream >> name;
    }
    void Write(std::ostream& ostream) override {
        Organism::Write(ostream);
        ostream << "Name: " << name << std::endl;
    }
    void GainEnergy() override;
    void GrowLeaves();
    kingdom getKingdom() override { return kingdom::PLANTAE; }
};

