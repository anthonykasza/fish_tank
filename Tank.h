#include <vector>

class Tank {
        public:
		Tank();
		Tank(int);
                void add(Fish&);
//                void remove(Fish&);
                std::vector<Fish> get_fishes();
        private:
                std::vector<Fish> fishes;
};
