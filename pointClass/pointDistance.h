#ifndef POINTDISTANCE_H
#define POINTDISTANCE_H

#define SIZEA 40
#define SIZEB SIZEA/2

#include "point.cc"

class Distance {
  private:
    Point pointArray[SIZEA];
    double pointDistances[SIZEB];
  public:
    Distance();
    double computeDistance(Point, Point);
    void inputIntoDistanceArray(int, double);
    void fillDistanceArray();
    void printPointArray() const;
    void printDistanceArray() const;
};


#endif //POINTDISTANCE_H
