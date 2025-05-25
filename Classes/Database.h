#pragma once
#include "Organism.h"
#include "Tree.h"
#include "Dog.h"
#include <vector>
class Database
{
public :
	std::vector<Organism*> objects;

    ~Database() {
        for (Organism* obj : objects)
        {
            delete obj;
        }
    }
    void Create(Organism::kingdom type) {
        Organism* obj = nullptr;
        switch (type)
        {
        case Organism::kingdom::PLANTAE:
            obj = new Tree;
            break;
        case Organism::kingdom::ANIMALIA:
            obj = new Dog;
            break;
        }
        obj->Read(std::cout, std::cin);
        objects.push_back(obj);
    }
    void DisplayAll();
    void Display(const std::string& name) {
        for (Organism* obj : objects)
           {
            if (obj->getName() == name)
            {
                obj->Write(std::cout);
             }
           }
    }
	void Display(Organism::kingdom type);
};

