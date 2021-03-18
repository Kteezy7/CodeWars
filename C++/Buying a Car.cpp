#include <cmath>

class BuyCar
{

  public:
  static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
  {
    int count = 0, saving = savingperMonth;
    double result = startPriceOld - startPriceNew;
    std::vector<int> answer;
    answer.reserve(2);
    
    double priceOld = static_cast<double>(startPriceOld);   //we want to convert startPriceOld into double and store it into another var that is double
    double priceNew = static_cast<double>(startPriceNew);

    while (result < 0)
    {
      count++;
      if (count % 2 == 0)
            percentLossByMonth += 0.5;
      priceOld -= percentLossByMonth / 100 * priceOld;
      priceNew -= percentLossByMonth / 100 * priceNew;
      result = priceOld - priceNew + savingperMonth;   
      savingperMonth += saving;    
      
    }
    answer.push_back(count);
    answer.push_back(round(result));
    return answer;
    
  }    
};
