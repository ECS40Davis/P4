  // Authors: Jessica and Nathaniel
  #include <iostream>
  #include <fstream>
  #include <cstring>
  #include <cstdlib>
  #include <cmath>
  #include "plane.h"
  using namespace std;
  
  const double Plane::jetFuelPrice = 3.39;
  
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
