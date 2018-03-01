class Point {
  private:
    double x, y;
  public:
    Point(double, double);
    void shift(double, double);
    double get_x() const;
    double get_y() const;
    void absResetx(int);
    void absResety(int);
    void xIntoy();
    void yIntox();
};
