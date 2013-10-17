// example function

#include <iostream>
#include <cmath>

using namespace std;


//function to convert from lbs to kg
//pre: input parameter is the weight in lbs which is > 0
//post: return the corresponding weight in kg
// kg = lb/2.2

double lb2kg (double);

//function to convert from in to m
//pre: input parameter is the height in inches which is > 0
//post: return the corresponding height in metres
//metres = in * 0.0254

double in2m (double);

//function to compute bmi
//pre: input parameter 1 is the weight in kg which is >0
// input paraemter 2 is the height in m which is >0
//post: return the BMI value

double BMI (double weight, double height);

//function to find obesity
//pre: input parameter is the bmi index
//post: return 1 for fit, 2 for overweight and 3 for obese

int obesity (double);


int main() {
  cout.setf(ios::fixed);
  cout.precision(1);
  double weight, htFt, htIn, totalIn, bmi, fitness;  
  cout << "Input the weight of the subject in lbs\n";
  cin >> weight;
  cout << "Input the height of the subject in ft and in (seperated by space)\n";
  cin >> htFt >> htIn;
  totalIn = (htFt * 12) + htIn;
  bmi = BMI(lb2kg(weight), in2m(totalIn));
  cout << "BMI = " << bmi << ", You are ";
  if (obesity(bmi) == 1) cout << "FIT.\n";
  else if (obesity(bmi) == 2) cout << "OVERWEIGHT.\n";
  else cout << "OBESE.\n";
  return 0;
}


double lb2kg (double weight) {
  double weight_in_kg = weight / 2.2;
  return weight_in_kg;
}

double in2m (double totalIn) {
  double height_in_m = totalIn * 0.0254;
  return height_in_m;
}

double BMI (double weight, double height) {
  double result = weight / pow(height, 2);
  return result;
}


int obesity (double bmi) {
  if (bmi <= 25) {
    return 1;
      } else if (bmi > 25 && bmi <= 30) {
    return 2;
      } else {
    return 3;
}
}
