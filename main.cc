#include "Fish.h"
#include "Fish.cc"
#include "Tank.h"
#include "Tank.cc"

#include <iostream>
using namespace std;

int main() {
        Tank tank(15);

        Fish guppy(2, "Garry");
        tank.add(guppy);

        Fish oscar(10, "Omar");
        tank.add(oscar);

        cout << "tank's contents: " << "\n";
        for (unsigned int i = 0; i < tank.get_fishes().size(); i++)
        {
                std::cout << "\t" << tank.get_fishes()[i].get_name() << "'s size: " << tank.get_fishes()[i].get_size() << "\n";
        }

        oscar.eat(guppy);
//	tank.remove(guppy);

        cout << oscar.get_name() << " just ate " << guppy.get_name() << "...\n";
        cout << oscar.get_name() << "'s new size: " << oscar.get_size() << "\n";

        cout << "tank's new contents: " << "\n";
        for (unsigned int i = 0; i < tank.get_fishes().size(); i++)
        {
                std::cout << "\t" << tank.get_fishes()[i].get_name() << "'s size: " << tank.get_fishes()[i].get_size() << "\n";
        }

        return 0;

}

