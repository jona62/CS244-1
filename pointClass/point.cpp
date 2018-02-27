#include <iostream>
using namespace std;

#include "point.cc"

int main() {
  Point p1(3.0, 2.5);
  Point p2(0.0, 0.0);
  cout << "Point 1: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
  cout << "Point 2: (" << p2.get_x() << ", " << p2.get_y() << ")\n";
  p1.shift(1,1);
  p2.shift(-4,-3.5);
  cout << "Shifted Point 1: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
  cout << "Shifted Point 2: (" << p2.get_x() << ", " << p2.get_y() << ")\n";
  p1.xIntoy();
  p2.yIntox();
  cout << "Copied Point 1: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
  cout << "Copied Point 2: (" << p2.get_x() << ", " << p2.get_y() << ")\n";
  p1.absResetx(120);
  p1.absResety(120);
  p2.absResetx(120);
  p2.absResety(120);
  cout << "Point 1 after reset: (" << p1.get_x() << ", " << p1.get_y() << ")\n";
  cout << "Point 2 after reset: (" << p2.get_x() << ", " << p2.get_y() << ")\n";
  return 0;
}
