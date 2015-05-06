#ifndef VECTOR_H
#define	VECTOR_H
// Author Sean Davis

#include "city.h"

class Vector
{
  // City Declaration
  City *cityArray;
  int size;
  int count;
  void resize();
  
public:
  Vector();
  ~Vector();
  // For City
  void calcAirportTraffic(int index) const;
  void calcDistance(int index1, int index2) const;
  void cleanCities();
  int findAirport(const char *airport) const;
  void readAirports();
  void readCities();
  int calcPassengers(const int index1, const int index2)const;
  int calcMiles(const int index1, const int index2)const;
};  // class Vector

#endif	// VECTOR_H 

