#include <stdio.h>
#include <math.h>

// Structure to represent a point
struct Point {
    int x;
    int y;
};

// Function to calculate the slope between two points
float calculateSlope(struct Point p1, struct Point p2) {
    float slope = (float)(p2.y - p1.y) / (p2.x - p1.x);
    return slope;
}

// Function to calculate the midpoint between two points
struct Point calculateMidpoint(struct Point p1, struct Point p2) {
    struct Point midpoint;
    midpoint.x = (p1.x + p2.x) / 2; // Calculate the x-coordinate of the midpoint by taking the average of the x-coordinates of the two points
    midpoint.y = (p1.y + p2.y) / 2; // Calculate the y-coordinate of the midpoint by taking the average of the y-coordinates of the two points
    return midpoint;

}

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    struct Point point1, point2;

    // Prompt the user to enter the values for point 1
    printf("Enter x and y for point 1: ");
    scanf("%d %d", &point1.x, &point1.y);

    // Prompt the user to enter the values for point 2SS
    printf("Enter x and y for point 2: ");
    scanf("%d %d", &point2.x, &point2.y);

    // Calculate and print the slope
    float slope = calculateSlope(point1, point2);
    printf("Slope: %.2f\n", slope);

    // Calculate and print the midpoint
    struct Point midpoint = calculateMidpoint(point1, point2);
    printf("Midpoint: (%d, %d)\n", midpoint.x, midpoint.y);

    // Calculate and print the slope-intercept form
    float intercept = point1.y - slope * point1.x;
    printf("Slope-intercept form: y = %.2fx + %.2f\n", slope, intercept);

    // Calculate and print the distance
    float distance = calculateDistance(point1, point2);
    printf("Distance between 2 points: %.2f\n", distance);

    return 0;
}
