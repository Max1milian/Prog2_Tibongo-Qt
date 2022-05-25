#ifndef POSITION_HPP_
#define POSITION_HPP_
#include <string>
class Position {
protected:
  int x = 0;
  int y = 0;

public:
  Position operator+(const Position &rhs) const;
  bool operator==(const Position &rhs) const;
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  std::string to_string();

  //
  Position(int x = 0, int y = 0)
      : x(x), y(y) {
  } //: x(x), y(y) ist die kurzschreibweise von this.x = x; und this.y = y;
  ~Position(){};
};
#endif
