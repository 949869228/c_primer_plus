#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609
int main(void)
{
    float mileage, oil_consumed;
    printf("Enter mile and oil consumed:");
    scanf("%f %f", &mileage, &oil_consumed);
    float evry_mile_oil = mileage / oil_consumed;
    printf("evry_mile_oil:%.1f\n", evry_mile_oil);
    printf("evry_kilometer_litre:%.1f\n", evry_mile_oil * MILE / GALLON);
    return 0;
}