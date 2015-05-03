#ifndef PLANE_H
#define PLANE_H

#include <fstream>
using namespace std;

class Plane
{
private:
  // planes.dat Format
  char name[12];
  int passengers;
  int range;
  int speed;
  int fuel;
  int price;
  
  // Calculating Cost
  static const double jetFuelPrice;
  
  double flightTime(const int miles)const; // single trip
  double fuelCost(const int miles, const int trips)const; // x trips
  double attendantCost(const int passengers, const double hours; int trips)const; // x trips
  double pilotCost(const int trips)const; // x trips
  double maintenanceCost(const int miles, const double hours)const; // x trips

public:
  Plane(); // default plane
  ~Plane(); // destruct plane
  void readPlane(); // reads in a plane
  friend ostream & operator << (ostream& os; const Plane &rhs); // displayPlaneInformation()
  void addPlaneInformation(); // addPlaneInformation()
  double totalCost(const int passengers, const int miles); // x trips determineBestPlane()
  const char* getName(const Plane &plane)const; // determineBestPlane()
}; // class Plane

#endif // PLANE_H
