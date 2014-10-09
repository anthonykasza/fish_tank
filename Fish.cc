#include <string>

Fish::Fish(){
	size = 4;
	name = "Charlie";
};

Fish::Fish(int m_size){
	size = m_size;
	name = "Charlie";
}

Fish::Fish(std::string m_name){
	size = 4;
	name = m_name;
}

Fish::Fish(int m_size, std::string m_name){
	size = m_size;
	name = m_name;
}

int Fish::get_size(){
	return size;
}

std::string Fish::get_name(){
	return name;
};

void Fish::eat(Fish& dinner){
	// the more you eat, the more you grow
	size = size + dinner.get_size();

	// remove the fish from the tank
	// and call it's destructor
	//dinner.dies();
}


