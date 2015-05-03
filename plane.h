#ifndef PLANE_H
#define PLANE_H

#include <fstream>
using namespace std;

class Plane
{
  char name[12];
  int passengers;
  int range;
  int speed;
  int fuel;
  int price;
  
  static const double jetFuelPrice;
  
  
  
  // Calculating Cost
  double fuelCost(); // x trips
  double attendantCost(); // x trips
  double pilotCost(); // x trips
  double maintenanceCost(); // x trips
  
  

public:
  Plane(); // default plane
  ~Plane(); // destruct plane
  friend ostream & operator << (ostream& os; const Plane &rhs); // displayPlaneInformation()
  void addPlaneInformation(); // addPlaneInformation()
  double totalCost(); // x trips determineBestPlane()
  const char* getName(const Plane plane)const; // determineBestPlane()
  
  
}; // class Plane



#endif // PLANE_H
