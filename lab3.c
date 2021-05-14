#include "stdio.h"
#include "stdbool.h"
#include <conio.h>
#include "stdlib.h"

int findFirstNegativeElement(double eps);
int findFirstElement(double eps);
void print(int n, int k);
double summ2(double eps);
double summ(int n);

double result;

double eps;

int n, k;
 
int main()
{
  printf("1. Zadanie 1\n2. Zadanie 2\n3. Zadanie 3\n4. Zadanie 4\n5. Zadanie 5\n6. Exit\n");
 
  switch (_getch())
  {
    case '1':
      printf("Zadanie 1\n Vvedite n: ");
      scanf("%lf", &n);
      result = summ(n);
      printf("%lf\n", result);
        break;
      
    case '2':
      printf("Zadanie 2\nVvedite E ");
      scanf("%lf", &eps);
      result = summ2(eps);
      printf("%lf\n", result);
      break;

      case '3':
      printf("Zadanie 3\n Vvedite n k: ");
      scanf("%d %d", &n, &k);
      print(n, k);
         break;

        case '4':
      printf("Zadanie 4\n Vvedite E: ");
      scanf("%lf", &eps);
      result = findFirstElement(eps);
       printf("%d\n", result);
        break;

        case '5':
      printf("Zadanie 5\n Vvedite E: ");
      scanf("%lf", &eps);
      result = findFirstNegativeElement(eps);
      printf("%d\n", result);
        break;

        case '6':
      exit(1);
        break;
  }
  system("pause");
   
  return 0;
}















