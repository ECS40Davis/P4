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
  name[0] = '\0';
  passengers = 0;
  range = 0;
  speed = 0;
  fuel = 0;
  price = 0;
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


double Plane::totalCost(const int passengers, const int miles) // x trips determineBestPlane()
{
  
} // totalCost()


double Plane::flightTime(const int miles)const // single trip
{
  
} // flightTime()


double Plane::fuelCost(const int miles, const int trips)const // x trips
{
  
} // fuelCost


double Plane::attendantCost(const int passengers, const double hours; int trips)const // x trips
{
  
} // attendantCost()


double Plane::pilotCost(const int trips)const // x trips
{
  
} // pilotCost()


double Plane::maintenanceCost(const int miles, const double hours)const // x trips
{
  
} // maintenanceCost


const char* Plane::getName(const Plane &plane)const // determineBestPlane()
{
  
} // getName()
