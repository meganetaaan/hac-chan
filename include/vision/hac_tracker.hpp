struct Position
{
  float x;
  float y;
  float z;
};

struct Wall
{
  bool front;
  bool right;
  bool back;
  bool left;
};

struct Result
{
  Position ball_pos;
  Wall wall;
};

Result recognize(/* TODO: pass the image */void);
