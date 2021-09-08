
class IMotion
{
public:
  virtual ~IMotion()
  {
  }

  virtual float straignt(int distance){};
  virtual float turn(float radian){};
};
