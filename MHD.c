// program to use magnetohydrodynamic drive or MHD accelerator to propel vehicles using only electrically conductive liquids, without moving parts.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Create variables
    float liquid Conductivity; //S/m
    float liquid Velocity; //m/s
    float liquid Density; //kg/m^3
    float liquid Temperature; //K
    float magnetic Field Strength; //T

    //Get input from user
    printf("Please enter the following values:\n");
    printf("Liquid Conductivity (S/m): ");
    scanf("%f", &liquidConductivity);
    printf("Liquid Velocity (m/s): ");
    scanf("%f", &liquidVelocity);
    printf("Liquid Density (kg/m^3): ");
    scanf("%f", &liquidDensity);
    printf("Liquid Temperature (K): ");
    scanf("%f", &liquidTemperature);
    printf("Magnetic Field Strength (T): ");
    scanf("%f", &magneticFieldStrength);

    //Calculate and output result
    float mhdDriveForce = liquidConductivity * liquidVelocity * magneticFieldStrength * liquidDensity;
    printf("The MHD Drive Force is %.2f N", mhdDriveForce);

    return 0;
}
