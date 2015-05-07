#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include "vector.h"
#include "plane.h"
using namespace std;


void calcDistance(const Vector *cities)
{
  char airport1[80], airport2[80];
  int index1, index2;
  cout << "\nPlease enter two airport abbreviations (XXX XXX): ";
  cin >> airport1 >> airport2;
  index1 = cities->findAirport(airport1);
  index2 = cities->findAirport(airport2);

  if (index1 >= 0 && index2 >= 0)
    cities->calcDistance(index1, index2);
}  // calcDistance())


void determineAirportTraffic(const Vector *cities)
{
  char airport[80];
  int index;
  cout << "\nPlease enter an airport abbreviation (XXX): ";
  cin >> airport;
  index = cities->findAirport(airport);

  if (index >= 0 && index >= 0)
    cities->calcAirportTraffic(index);
}  // determinAirportTraffic()


void displayPlaneInformation(const Plane planes[10], const int numPlanes)
{
   cout << "\nPlane Information" << endl; 
   cout << setw(12) << left << "Name"
            << setw(6) << "Pass." 
            << setw(6) << "Range"
            << setw(6) << "Speed"
            << setw(7) << "Fuel"
            << setw(6) << "MPG"
            << setw(6) << "$/mi"
            << setw(6) << "Price * 10^6"
            << endl;
  for(int i = 0; i < numPlanes; i++)
    cout << planes[i];
} // displayPlaneInformation


void addPlaneInformation(Plane planes[10], int numPlanes)
{
    planes[numPlanes++].addPlaneInformation(); //()<-cin stuff
} // addPlaneInformation()


void determineBestPlane(const Vector *cities, Plane planes[10], const int numPlanes)
{
  double minCostPlane = 0;
  int minCostElement = 0;
  char airport1[80], airport2[80];
  cout << "\nPlease enter two airport abbreviations (XXX XXX): ";
  cin >> airport1 >> airport2;
  
  int index1 = cities->findAirport(airport1);
  int index2 = cities->findAirport(airport2);
  
  if (index1 >= 0 && index2 >= 0)
  {
    int passengers = cities->calcPassengers(index1, index2);
    int miles = cities->calcMiles(index1, index2);
//    cout << "passengers: " << passengers << "\tmiles: " << miles << endl;
    
    minCostPlane = planes[0].calcTotalCost(passengers, miles);
//    cout << "minCostPlane: " << minCostPlane << endl;
//    cout << "numPlanes: " << numPlanes << "\n\n";
    
    for (int i = 1; i < numPlanes; i ++)
    {
        double j = planes[i].calcTotalCost(passengers, miles);
        if (j < minCostPlane)
        {
            minCostElement = i;
        }// if it is min
      
    } // check all planes for their min value
    planes[minCostElement].getName(passengers, miles);

  } // if the planes exist
  
} // determineBestPlane())


int getChoice()
{
  int choice;

  do
  {
    cout << "\nFlight Simulator Menu\n";
    cout << "0. Done.\n";
    cout << "1. Determine distance and passengers between two airports.\n";
    cout << "2. Determine all traffic from one airport.\n";
    cout << "3. Display planes information.\n";
    cout << "4. Add plane information.\n";
    cout << "5. Determine best plane between two airports.\n\n";
    cout << "Your choice (0 - 5): ";
    cin >> choice;
    cin.ignore(1000, '\n');
   
    if  (choice < 0 || choice > 5)
      cout << "Your choice must be between 0 and 5. Please try again.\n";
  } while(choice < 0 || choice > 5);
   
  return choice;
}  // getChoice()  


void run(const Vector *cities, Plane planes[10], int numPlanes)
{
  int choice;
  ifstream inf;
  inf.open("planes.dat", ios::in | ios::binary);
  while(!inf.eof())
  {
    planes[numPlanes++].readPlane(inf);
  } // while more in file
  
  inf.close();
  numPlanes--;  

  do
  {
    choice = getChoice();
    
    if (choice == 1)
      calcDistance(cities);
    else  // Done or determine traffic
      if (choice == 2)
        determineAirportTraffic(cities);
      else // Done or determine plane information
        if (choice == 3)
          displayPlaneInformation(planes, numPlanes);
        else // Done or add plane info
          if (choice == 4)
          {
            addPlaneInformation(planes, numPlanes);
            numPlanes++;
          }
          else // Done or determine best plane
            if (choice == 5)
              determineBestPlane(cities, planes, numPlanes);
  } while(choice != 0);
}  // run())


int main(int argc, char** argv) 
{
  // Cities
  Vector cities;
  cities.readCities();
  cities.readAirports();
  cities.cleanCities();
  
  // Planes
  Plane planes[10];
  int numPlanes = 0;
  
//  srand(1);
//  for(int i = 0; i < citiesPlanes.count; i++)
//    cout << "1\n" << citiesPlanes.cityArray[i].airport << ' ' << citiesPlanes.cityArray[rand() % citiesPlanes.count].airport << endl;
//  printf("%s %s %lf %lf\n", citiesPlanes.cityArray[i].name, citiesPlanes.cityArray[i].airport, citiesPlanes.cityArray[i].latitude, citiesPlanes.cityArray[i].longitude);
  run(&cities, planes, numPlanes);
  return 0;
} // main())
