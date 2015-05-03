// Authors: Jessica and Nathaniel
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include "plane.h"
using namespace std;
  
const double Plane::jetFuelPrice = 3.39;

Plane::Plane() // default plane
{
  name[0] = '\0'; // aircraft name
  passengers = 0; // total possible number of people
  range = 0; // total possible miles
  speed = 0; // miles / hour
  fuel = 0; // total possible gallons
  price = 0; // $
} // Plane()


Plane::~Plane() // destruct plane
{
  
} // ~Plane()


void Plane::readPlane() // reads in a plane
{
  
} // readPlane()


friend ostream& Plane::operator<< (ostream& os; const Plane &rhs) // displayPlaneInformation()
{
  
} // operator<<


void addPlaneInformation() // addPlaneInformation() ???????????????????????????????????????????
{
  
} // addPlaneInformation() 


double Plane::calcTotalCost(const int passengers, const int miles) // x trips determineBestPlane()
{
  double hours = calcFlightTime(miles);
  int trips = calcNumTrips(miles);
  double fuelCost =  calcFuelCost(miles, trips); 
  double attendantCost = calcAttendantCost(hours, trips);
  double pilotCost = calcPilotCost(trips);
  double maintenanceCost = calcMaintenanceCost(hours, trips);
  return fuelCost + attendantCost + pilotCost + maintenceCost;
} // CalcTotalCost()


double Plane::calcFlightTime(const int miles)const // single trip
{
  return miles / speed; // hours = miles / (miles / hour)
} // calcFlightTime()


int calcNumTrips(const int miles) // total number of trips
{
  return ceil(miles / range); // trips = totalMiles / planeMiles
} // calcNumTrips()


double Plane::calcFuelCost(const int miles, const int trips)const // x trips
{
  double MPG = range / fuel; // miles per gallon
  return jetFuelPrice / MPG * miles; // ($ / gal) * (gal / mi) * mi
} // calcFuelCost


int calcNumAttendants(void) // single trip
{
  return ciel(passengers / 100); // flight attendant per 100 possible passengers
} // numAttendants()


double Plane::calcAttendantCost(const double hours; int trips)const // x trips
{
  int attendants = calcNumAttendants();
  return attendants * 30 * hours * trips; // wage = $30 / hour
} // calcAttendantCost()


double Plane::calcPilotCost(const int trips)const // x trips
{
  int pilots = calcNumPilots(); 
  return pilots * 100 * hours * trips; // wage = $100 / hour
} // calcPilotCost()


double Plane::calcMaintenanceCost(const double hours, const int trips)const // x trips
{
  return 25 * price * hours * trips; // .0025% * price * 10^6 * hours * trips
} // calcMaintenanceCost


const char* Plane::getName(const Plane &plane)const // determineBestPlane()
{
  
} // getName()
