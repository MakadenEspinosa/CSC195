#include <iostream>
#include "Organism.h"
#include "Database.h"
int main()
{
	Database database;

    bool quit = false;
    while (!quit)
    {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1: // Create object by type break; 
        {
            std::cout << "1 - Dog\n2 - Tree\n";
            int organism;
            std::cin >> organism;
            if (organism == 1) {
                Dog* d = new Dog;{}
                database.Create((*(dynamic_cast<Organism*>(d))).getKingdom());
                delete d;
            }
            else {
                Tree* t = new Tree;{}
                database.Create((*(dynamic_cast<Organism*>(t))).getKingdom());
                delete t;
            }
            break;
        }
        case 2:  database.DisplayAll(); break; 
        case 3: // Ask for name, then call database.Display(name) break; 
        {
            std::cout << "Enter Organism name: ";
            std::string organism;
            std::cin >> organism;
            database.Display(organism);
            break;
        }
        case 4:
        {
            std::cout << "Enter type (0 for Tree, 1 for Dog): ";
            int t;
            std::cin >> t;
            database.Display(static_cast<Organism::kingdom>(t)); break;
        }
        case 5:
            quit = true;
            break;
        }
    }

	return 0;
}
