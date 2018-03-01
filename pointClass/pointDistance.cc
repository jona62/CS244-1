#include "pointDistance.h"

Distance::Distance() {
  srand(time(0));
  double newX, newY;
  for (int i = 0; i < SIZEA; i++) {
    newX = rand() % 100 + 1;
    newY = rand() % 100 + 1;
    pointArray[i].shift(newX, newY);
  }
}

double Distance::computeDistance(Point a, Point b) {
  double ab;
  ab = (b.get_x() - a.get_x()) * (b.get_x() - a.get_x());
  ab += ((b.get_y() - a.get_y()) * (b.get_y() - a.get_y()));
  ab = sqrt(ab);
  return ab;
}

void Distance::inputIntoDistanceArray(int index, double value) {
  pointDistances[index] = value;
}

void Distance::fillDistanceArray() {
  double result;
  for (int i = 0, j = 0; i < SIZEA - 1; i+=2, j++) {
    result = computeDistance(pointArray[i], pointArray[i+1]);
    inputIntoDistanceArray(j, result);
  }
}

void Distance::printPointArray() const {
  stringstream result;
  for (int i = 0; i < SIZEA; i++) {
    result << "Point " << i + 1 << ": (";
    result << pointArray[i].get_x() << " , ";
    result << pointArray[i].get_y() << ")\n";
  }

  cout << result.str();
}

void Distance::printDistanceArray() const {
  stringstream result;
  for (int i = 0; i < SIZEB; i++) {
    result << "Distance " << i + 1 << ": ";
    result << pointDistances[i] << endl;
  }

  cout << result.str();
}
