use std::vec::Vec;

struct Fish {
	size: uint,
	name: &'static str,
	fish_type: &'static str,
}

impl Fish {
	fn eat(&mut self, fish: &Fish) {
		self.size = self.size + fish.size
	}
}

struct Tank {
	size: uint,
	fishes: Vec<Fish>,
}

impl Tank {
	fn add_fish(&mut self, fish: Fish) -> uint {
		let i: uint = self.fishes.len();
		self.fishes.push(fish);
		return i;
	}

	fn remove_fish(&mut self, i: uint) {
		let _: Option<Fish> = self.fishes.remove(i);
	}
}

fn main() {
	let mut tank = Tank { size: 25, fishes: vec![] };

        let guppy: uint = tank.add_fish(Fish { fish_type: "Guppy", size: 2, name: "Garry" });
        let oscar: uint = tank.add_fish(Fish { fish_type: "Oscar", size: 10, name: "Omar" });

	println!("{}", tank.fishes.len());

	println!("tank's contents: ");
	for each_fish in tank.fishes.iter(){
		println!("{} the {}'s size: {}", each_fish.name, each_fish.fish_type, each_fish.size);
	}

	println!("{} just ate {} ...", tank.fishes.get(oscar).name, tank.fishes.get(guppy).name);
	println!("{}'s new size: {}", tank.fishes.get(oscar).name, tank.fishes.get(oscar).size);
	tank.remove_fish(guppy);
//	tank.fishes.get_mut(oscar).eat(tank.fishes.get(guppy));

	println!("tank's new contents: ");
	for each_fish in tank.fishes.iter(){
		println!("{} the {}'s size: {}", each_fish.name, each_fish.fish_type, each_fish.size);
	}
} 
