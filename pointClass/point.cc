#include "point.h"

Point::Point(double init_x = 0, double init_y = 0) {
  x = init_x;
  y = init_y;
}

void Point::shift(double dx, double dy) {
  x += dx;
  y += dy;
}

double Point::get_x() const {
  return x;
}

double Point::get_y() const {
  return y;
}
