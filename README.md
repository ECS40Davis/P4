# P4
Adding a Flight Calculator

Outline:
- Main function:
 - initialize: create a plane function
 - initialize: readPlanes (initialize 10 elements in the array)
- Run function:
 - call: displayPlaneInformation()
 - call: addPlaneInformation()
 - call: determineBestPlane()
- Vector class: 
 - class variable: Plane *plane
 - class variable: int total_planes
 - class method: displayPlaneInformation() [charts]
 - class method: addPlaneInformation() [file append]
 - class method: determineBestPlane() [calls: calcDistance(), getName(distance_from_calcDistance)]
 - call: getName()
- City class:
 - modify class method: calcDistance (return distance) 
- Plane class:
 - class variable: static const double jet_fuel_cost 3.39
 - class method: overloaded operator <<
 - setPlane() [user inputs plane data]
 - getName() [best plane]
 - fuelCost() [from the distance, calculate fuel needed and cost]
 - totalAttendants [from the data file (possible passengers in a planes), determine how many flight attendants needed, return int]
 - totalPilots() [from the data file (number of planes), determine how many pilots needed, return int]
 - attendantsCost() [from totalAttendants, calculate cost in dollars to have them]
 - pilotsCost() [from totalPilots, calculate cost in dollars to have them]
 - maintenanceCost() [.0025% * aircraftPrice * hours]

Progress:
- Created Outline

Fixed Errors:

Helpful Hints:
- To append a file: http://mathbits.com/MathBits/CompSci/Files/Append.htm
