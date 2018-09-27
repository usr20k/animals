#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("turtle turtle turtle")
	{}


	int GetPower() { return 7; };

};

class Dog: public Animal
{
public:
	Dog():

	Animal("bork! bork! bork!")
	{}

	int GetPower() {return 100};
}
class Bear : public Animal {
public:
	Bear():
	Animal("ROAR")
	{}


	int GetPower() { return 9000; };

};

// Define your animals here

#endif  // _ANIMAL_H_
