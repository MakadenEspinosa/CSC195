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
        ostream << "Enter Number of Leaves: ";
        istream >> leaves;
        ostream << "Enter energy: ";
        istream >> energy;
    }
    void Write(std::ostream& ostream) override {
        Organism::Write(ostream);
        ostream << "Name: " << name << ", Leaves: " << leaves<< ", Energy: " << energy << std::endl;
    }
    void GainEnergy() override;
    void GrowLeaves();
    kingdom getKingdom() override { return kingdom::PLANTAE; }
};

