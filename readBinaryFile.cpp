#include <iostream>
#include <fstream>
#include <cstring>
#include "plane.h"
using namespace std;

int main(int argc, char** argv)
{
  char name[12];
  int passenger;

  fstream f;

  f.open("planes.dat", ios::in | ios::binary);
  f.read((char*)(&name), sizeof(name));
  f.read((char*)(&passenger), sizeof(passenger));

  cout << name << " " << passenger << endl;
  f.close();
  return 0;
}
