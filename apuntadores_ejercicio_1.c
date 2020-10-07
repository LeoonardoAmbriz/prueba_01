#include<stdio.h>

int main()
{
  int operacion[6] = {1, -10, 0 -1, 20, 100};
  int *apuntador = operacion;

  apuntador++;
  printf("\n\ncontenido de la direccion de memoria por apuntador: %d", *apuntador);

  apuntador += 3;
  printf("\n\ncontenido de la direccion de memoria por apuntador: %d", *apuntador);

  apuntador -= 4;
  printf("\n\ncontenido de la direccion de memoria por apuntador: %d", *apuntador);


    return 0;
}
