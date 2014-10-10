#include <iostream>
#include <vector>
#include <algorithm>

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
//	fishes.erase( std::remove( fishes.begin(), fishes.end(), fish ), fishes.end() );
//}

std::vector<Fish> Tank::get_fishes(){
        return fishes;
}
