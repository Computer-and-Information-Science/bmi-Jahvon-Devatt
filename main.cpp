#include <iostream>
using namespace std;

int main() {
 //Hardcoded values are imperial units
    int height = 61;
    int weight = 130;

//Metric units
    float kg = weight * 0.453592;
    float meters = height * 0.0254;

    float BMI = kg/(meters * meters);

    cout << "The BMI for this person is: " << BMI; "\n";


}
