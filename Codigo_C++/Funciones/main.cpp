#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Programa que convierte una cadena a un entero

int main ()
{
    string uno = "00000011", dos = "00000010", tres="00000001", cuatro = "10101011";
    int num1, num2, num3, num4, num5;

    num1 =  atoi(uno.c_str());
    cout << "dos es " <<  atoi(dos.c_str())<<endl;
    cout << "tres es " <<  atoi(tres.c_str())<<endl;
    num4 = atoi(cuatro.c_str());

   int exp,digito;

   int binario, decimal;
   exp=0;
   decimal=0;
   //binario = 10101011;
   binario = num1;
   cout << binario <<endl;
   while(((binario/10))!=0)
   {
           digito = binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(binario/10);
   }
   decimal=decimal + binario * pow(2.0,exp);
   cout << endl << "Decimal: " << decimal << endl;


//   int mayor;

//   if(num1>num2){
//       mayor = num1;
//       if(mayor>num3)
//           if(mayor>num4){
//               if(mayor>num5){
//                  mayor = mayor;
//               }
//               else
//                   mayor = num5;
//           }
//           else{
//               mayor = num4;
//               if(mayor >num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//       else{
//           mayor = num3;
//           if(mayor > num4){
//               if(mayor>num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//           else{
//               mayor = num4;
//               if(mayor>num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//       }
//   }

//   //
//   else{
//       mayor = num2;
//       if(mayor>num3)
//           if(mayor>num4){
//               if(mayor>num5){
//                  mayor = mayor;
//               }
//               else
//                   mayor = num5;
//           }
//           else{
//               mayor = num4;
//               if(mayor >num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//       else{
//           mayor = num3;
//           if(mayor > num4){
//               if(mayor>num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//           else{
//               mayor = num4;
//               if(mayor>num5)
//                   mayor = mayor;
//               else
//                   mayor = num5;
//           }
//       }
//   }

   return 0;
}
