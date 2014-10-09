#include <string>

class Fish {
        public:
                Fish();
                Fish(int);
                Fish(std::string);
                Fish(int, std::string);

                void eat(Fish&);
//		void dies();
                int get_size();
		std::string get_name();
        private:
                int size;
		std::string name;
};

