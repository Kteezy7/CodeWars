class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
      int count = 1;
      if(h <= 0 || bounce <= 0 || bounce >= 1 || window >= h)
        return -1;
      while(true)
      {
        h *= bounce;
        if (h <= window)
          break;
        count += 2;
      }
      return count;
    }
};
