// Joshua Ingeniero
// UCFID: 5618448

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double askForUserInput() {
    
    double userInput;

    scanf("%lf", &userInput);
    return userInput;
}


double calculateDistance() {


    double x1 = askForUserInput(); // Uses the askForUserInput(); function to assign user input for variables x1, y1, x2, y2 
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // distance = diameter
    printf("Point #1 entered: x1 = %lf; y1 = %lf Point #2 entered: x2 = %lf; y2 = %lf\n", x1, y1, x2, y2);
    return distance; 
}

double calculatePerimeter() {

    double distance = calculateDistance();

    double perimeter = distance * PI; // formula for perimeter = (PI)(distance)
    printf("The perimeter of the city encompassed by your request is: %lf\n", perimeter);
    return 4.0;
}

double calculateArea() {
    
    double distance = calculateDistance();
    
    double area = (PI * pow(distance, 2)) / 4; // formula for area = (1/4)(PI)(distance^2)
    printf("The area of the city encompassed by your request is: %lf\n", area);
    return 3; 
}

double calculateWidth() {
    
    double width = calculateDistance(); // width of a circle = distance
    printf("The width of the city encompassed by your request is: %lf\n", width);
    return 1;
}

double calculateHeight() {

    double height = calculateDistance(); // height of a circle = distance
    printf("The height of the city encompassed by your request is: %lf\n", height);
    return 1;
}

int main(int argc, char **argv) {

    double distance = calculateDistance();
    printf("The distance between the two points is: %lf\n", distance); // Allows us to use the calculateDistance(); function in other functions without printing this statement redundantly
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}