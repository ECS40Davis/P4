# P4
Adding a Flight Calculator

Outline:
- Main function:
 - initialize: create an array of 10 planes
 - call: readPlanes() track the number of planes in array
- Run function:
 - call: displayPlaneInformation()
 - call: addPlaneInformation()
 - call: determineBestPlane()
- Vector class: 
 - class variable: Plane *plane
 - class variable: int total_planes
 - class method: displayPlaneInformation() [charts]
 - class method: addPlaneInformation() [file append]
 - class method: determineBestPlane() [calls: calcDistance(), getName(distance and passengers from calcDistance)]
 - call: getName() ^ [belongs with determineBestPlane()]
- City class:
 - modify class method: calcDistance (return distance) 
- Plane class:
 - class variable: static const double jet_fuel_cost 3.39
 - class variables: formatted like the planes.dat file
 - class method: readPlane() [read plane info from planes.dat]
 - class method: overloaded operator <<
 - class method: addPlaneInformation() [user inputs plane data]
 - class method: getName() [best plane]
 - class method: flightTime() [for calculating attendants' and pilots' wages]
 - class method: totalCost() [fuel, attendants, pilots, and maintenance]
 - class method: fuelCost() [from the distance, calculate fuel needed and cost]
 - class method: totalAttendants [from the data file (possible passengers in a planes), determine how many flight attendants needed, return int]
 - class method: attendantsCost() [from totalAttendants, calculate cost in dollars to have them]
 - class method: totalPilots() [from the data file (number of planes), determine how many pilots needed, return int]
 - class method: pilotsCost() [from totalPilots, calculate cost in dollars to have them]
 - class method: maintenanceCost() [.0025% * aircraftPrice * hours]

Progress:
- Created Outline
- Created Plane Stubs

To do:
- Create Vector Stubs
- Modify City's calcDistance

Fixed Errors:

Helpful Hints:
- To append a file: http://mathbits.com/MathBits/CompSci/Files/Append.htm
