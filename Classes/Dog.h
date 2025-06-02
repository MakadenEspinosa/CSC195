#pragma once
#include "Organism.h"
class Dog : public Organism
{
public:
    int dogBones;
    void Read(std::ostream& ostream, std::istream& istream) {
        Organism::Read(ostream, istream);
        ostream << "Enter Name: ";
        istream >> name;
        ostream << "Enter number of Dogbones: ";
        istream >> dogBones;
        ostream << "Enter number of Energy: ";
        istream >> energy;
    }
    void Write(std::ostream& ostream) override {
        Organism::Write(ostream);
        ostream << "Name: " << name <<", Energy: " << energy << ", Dog Bones: "<< dogBones << std::endl;
    }
    kingdom getKingdom() override { return kingdom::ANIMALIA; }
    void GainBone();
    void GainEnergy() override;

};

