#include <iostream>
using namespace std;

class Donators
{
public:
  int Id;

private:
  string Name;
  string Location;
  double DonatedAmount;

public:
  void DisplayAttributes()
  {
    cout << "Id: " << Id << endl;
    cout << "Name: " << Name << endl;
    cout << "Location: " << Location << endl;
    cout << "Donated Amount: " << DonatedAmount << endl;
  }

  void setName(string name)
  {
    Name = name;
  }
  void setLocation(string location)
  {
    Location = location;
  }
  void setDonatedAmount(double donatedAmount)
  {
    DonatedAmount = donatedAmount;
  }

  friend double totalDonation(Donators *donators, int size);
};

double totalDonation(Donators *donators, int size)
{
  double total = 0.0;
  for (int i = 0; i < size; i++)
  {
    total += donators[i].DonatedAmount;
  }
  return total;
}

int main()
{
  int size;
  cout << "Enter the number of donators: ";
  cin >> size;

  Donators *donators = new Donators[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter details for Donator " << i + 1 << ":" << endl;
    cout << "Id: ";
    cin >> donators[i].Id;

    string name, location;
    double donatedAmount;

    cout << "Name: ";
    cin >> name;
    donators[i].setName(name);

    cout << "Location: ";
    cin >> location;
    donators[i].setLocation(location);

    cout << "Donated Amount: ";
    cin >> donatedAmount;
    donators[i].setDonatedAmount(donatedAmount);

    cout << endl;
  }

  for (int i = 0; i < size; i++)
  {
    cout << "Donator " << i + 1 << " attributes:" << endl;
    donators[i].DisplayAttributes();
    cout << endl;
  }

  double total = totalDonation(donators, size);
  cout << "Total donation amount: " << total << endl;

  delete[] donators;

  return 0;
}
