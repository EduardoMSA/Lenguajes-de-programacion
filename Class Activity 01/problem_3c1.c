#include <stdio.h>
float resistor_fun(float current);


main(){
  float Resistor, current;

  printf("Enter the current value:");
  scanf("%f",&current);

  Resistor = resistor_fun(current);

  printf("The required resistor should be ");
  printf("%1.0f Ohms.\n", Resistor);
}
