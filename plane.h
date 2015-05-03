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
  
  double calcFlightTime(const int miles)const; // single trip
  int calcNumTrips(const int miles); // number of trips
  double calcFuelCost(const int miles, const int trips)const; // x trips
  int calcNumAttendants(); // single trip
  double calcAttendantCost(const int passengers, const double hours; int trips)const; // x trips
  int calcNumPilots(); // single trip
  double calcPilotCost(const int trips)const; // x trips
  double calcMaintenanceCost(const int miles, const double hours)const; // x trips

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
