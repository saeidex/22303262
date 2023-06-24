#include <iostream>
using namespace std;

class ComplexNumber
{
private:
  double real;
  double imaginary;

public:
  void setReal(double r)
  {
    real = r;
  }

  void setImaginary(double i)
  {
    imaginary = i;
  }

  double getReal() const
  {
    return real;
  }

  double getImaginary() const
  {
    return imaginary;
  }
};

ComplexNumber maxRealPart(const ComplexNumber &num1, const ComplexNumber &num2)
{
  if (num1.getReal() > num2.getReal())
  {
    return num1;
  }
  else
  {
    return num2;
  }
}

int main()
{
  ComplexNumber num1;
  num1.setReal(3);
  num1.setImaginary(2);

  ComplexNumber num2;
  num2.setReal(5);
  num2.setImaginary(1);

  ComplexNumber maxNum = maxRealPart(num1, num2);

  cout << "Complex number with the highest real part: " << maxNum.getReal() << " + " << maxNum.getImaginary() << "i" << endl;

  return 0;
}
