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
	tank.display_fishes();

        cout << guppy.get_name() << "'s size: " << guppy.get_size() << "\n";
        cout << oscar.get_name() << "'s size: " << oscar.get_size() << "\n";

        oscar.eat(guppy);
        cout << oscar.get_name() << " just ate " << guppy.get_name() << "...\n";
        cout << oscar.get_name() << "'s new size: " << oscar.get_size() << "\n";

        cout << "tank's contents: " << "\n";
	tank.display_fishes();

        return 0;

}

