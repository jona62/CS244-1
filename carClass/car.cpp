#include "car.cc"

int main() {
  Car honda(25, 'S');

  assert(honda.getSpeed() == 25);
  assert(honda.getDirection() == 'S');

  honda.changeDirection('L');

  assert(honda.getDirection() == 'E')
  assert(honda.isGoingForward() == true);

  honda.changeSpeed(-10);

  assert(honda.isGoingForward() == false);

  return 0;
}
