

#include <iostream>
using namespace std;
const double POUND_TO_KG = 0.453592, INCH_TO_METER = 0.0254;
int main()
{
    double weight_pound, height_inch, BMI;
    double weight_kg, height_m;
    cout << "Please enter weight (in pounds): ";
    cin >> weight_pound;
    cout << "Please enter height (in inches): ";
    cin >> height_inch;
    weight_kg = weight_pound * POUND_TO_KG;
    height_m = height_inch * INCH_TO_METER;
    BMI = weight_kg / (height_m * height_m);
    
    if (BMI < 18.5) {
        cout << "The weight status is: Underweight";
    }
    else if (BMI >= 18.5 && BMI < 25) {
        cout << "The weight status is: Normal";
    }
    else if (BMI >= 25 && BMI < 30) {
        cout << "The weight status is: Overweight";
    }
    else if(BMI>=30){
        cout << "The weight status is: Obese";
    }
    return 0;
}

