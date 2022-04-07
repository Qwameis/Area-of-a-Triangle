#include <iostream>

using namespace std;

int main() {
    
    int fvalue;
    int svalue;
  
    //prompt user input
    cout<< "Please enter the height of your triangle: ";
    cin >> fvalue;
  
    //prompt user input base lenght
    cout << "Enter the base lenght of your triangle: ";
    cin >> svalue;
    
    //calculate trianlge area
    int triangle_area = 0.5 * fvalue * svalue;
    
    cout << "The area of your triangle is: " << triangle_area;
    return 0;
}
