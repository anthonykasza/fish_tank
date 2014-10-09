#include <iostream>
#include <vector>

Tank::Tank(){
	int size = 10;
        fishes.reserve(size);
}

Tank::Tank(int size){
        fishes.reserve(size);
}

void Tank::add(Fish& fish){
        fishes.push_back(fish);
}

//void Tank::remove(Fish& fish){
//        fishes.remove(fish);
//}

std::vector<Fish> Tank::get_fishes(){
        return fishes;
}

void Tank::display_fishes(){
	for (unsigned int i = 0; i < fishes.size(); i++)
	{
		std::cout << "\t" << fishes[i].get_name() << ": " << fishes[i].get_size() << "\n";
	}
}
