#include <iostream>

using namespace std;

class Superhero {
public:
  int strength;
  int speed;
  int intelligence;

  Superhero(int strength, int speed, int intelligence) {
    strength_ = strength;
    speed_ = speed;
    intelligence_ = intelligence;
  }

  // Overload the + operator to simulate a battle between two superheroes.
  Superhero operator+(const Superhero& other) {
    int new_strength = strength_ + other.strength_;
    int new_speed = speed_ + other.speed_;
    int new_intelligence = intelligence_ + other.intelligence_;
    return Superhero(new_strength, new_speed, new_intelligence);
  }

  // Returns true if this superhero has a higher combined attributes than the other superhero.
  bool isStrongerThan(const Superhero& other) {
    int combined_attributes = strength_ + speed_ + intelligence_;
    int other_combined_attributes = other.strength_ + other.speed_ + other.intelligence_;
    return combined_attributes > other_combined_attributes;
  }

private:
  int strength_;
  int speed_;
  int intelligence_;
};

int main() {
  Superhero superman(100, 100, 100);
  Superhero batman(50, 50, 50);

  // The superhero with the higher combined attributes wins the fight.
  if (superman + batman > batman + superman) {
    cout << "Superman wins!" << endl;
  } else {
    cout << "Batman wins!" << endl;
  }

  return 0;
}
