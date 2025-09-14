#include <stdio.h>


int main(){
    int height, radius;
    float volume;

    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &radius);
    volume = 3.14 * radius * radius * height;
    printf("The volume of the cylinder is: %f\n", volume);

}