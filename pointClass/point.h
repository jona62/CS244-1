class Point {
  private:
    double x, y;
  public:
    Point(double init_x, double init_y);
    void shift(double dx, double dy);
    double get_x() const;
    double get_y() const;
    void absResetx(int value);
    void absResety(int value);
    void xIntoy();
    void yIntox();
};
