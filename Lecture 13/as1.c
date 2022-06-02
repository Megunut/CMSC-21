#include <stdio.h>
#include <math.h>

struct line
{
    struct point            //struct for x and y coordinates
    {
        float x;
        float y;
    }point1, point2;
    float midpoint_x;       //declares x-coordinate for the midpoint
    float midpoint_y;       //declares y-coordinate for the midpoint
    float slope;            
    float distance;
};

//function declarations 
float solveSlope(struct line line1);
float solveMidpoint(float point1, float point2);
float solveMidpoint_y(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);

int main(void){
    struct line line1;

    //takes first point coordinates
    printf("Enter x and y for point 1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);
    //takes second point coordinates
    printf("Enter x and y for point 2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    //slope
    line1.slope = solveSlope(line1);
    printf("\nSlope: %.2f", line1.slope);

    //midpoint, solves for the midpoint of x and y separately
    line1.midpoint_x = solveMidpoint(line1.point1.x, line1.point2.x);
    line1.midpoint_y = solveMidpoint(line1.point1.y, line1.point2.y);
    printf("\nMidpoint: (%.2f, %.2f)", line1.midpoint_x, line1.midpoint_y);

    //distance
    line1.distance = solveDistance(line1);
    printf("\nDistance: %.2f", line1.distance);

    //slope intercept form
    getSlopeInterceptForm(line1);
}

float solveSlope(struct line line1){
    //slope formula
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    return slope;
}

float solveMidpoint(float point1, float point2){
    //midpoint formula
    float midpoint = (point1 + point2)/2;
    return midpoint;
}

float solveDistance(struct line line1){
    float squared_x = (line1.point2.x - line1.point1.x)*(line1.point2.x - line1.point1.x);
    float squared_y = (line1.point2.y - line1.point1.y)*(line1.point2.y - line1.point1.y);

    //distance formula
    float distance = sqrt(squared_x + squared_y);
    return distance;
}

void getSlopeInterceptForm(struct line line1){
    //solves for the y-intercept
    float b = line1.point1.y - (line1.slope*line1.point1.x);

    //prints slope intercept form
    printf("\nSlope Intercept Form: y = %.2fx + (%.2f)", line1.slope, b);
}