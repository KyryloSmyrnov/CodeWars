namespace Triangle
{
  bool isTriangle(unsigned int a, unsigned int b, unsigned int c)
  {
    return a + b > c && b + c > a && c + a > b;
  }
};
