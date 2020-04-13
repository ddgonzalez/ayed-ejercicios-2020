//============================================================================
// Name        : ej_10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {

   cout << "Ingrese la fecha de hoy (primero el día, luego el mes, luego el año)" << endl;
   int diaHoy,mesHoy,anioHoy;
   cin >> diaHoy >> mesHoy >> anioHoy;

   cout << "Ingrese la fecha A (primero el día, luego el mes, luego el año)" << endl;
   int diaA,mesA,anioA;
   cin >> diaA >> mesA >> anioA;

   cout << "Ingrese la fecha B (primero el día, luego el mes, luego el año)" << endl;
     int diaB,mesB,anioB;
     cin >> diaB >> mesB >> anioB;

 int iHoy = 0;
 int iA = 0;
 int iB = 0;

 int iHoy2 = anioHoy;
 int iA2 = anioA;
 int iB2 = anioB;



 while (iHoy2 > 0){
  iHoy2 = iHoy2 - 1;

  if (iHoy2 % 4 == 0 and iHoy2 % 100 != 0)
    {
     iHoy = iHoy + 1;
          }
       }



while (iA2 > 0){
  iA2 = iA2 - 1;
   if ((iA2 % 4 == 0) and (iA2 % 100 != 0))
   {
     iA = iA + 1;
          }
        }



 while (iB2 > 0){
  iB2 = iB2 - 1;
   if ((iB2 % 4 == 0) and (iB2 % 100 != 0))
    {
     iB = iB + 1;
          }
        }









 int sumaDiasPorAnioHoy = 365 * (anioHoy - 1) + iHoy;
 int sumaDiasPorAnioA = 365 * (anioA - 1) + iA;
  int sumaDiasPorAnioB = 365 * (anioB - 1)+ iB;


//=========================================================================================================


  int sumaDiasPorMesHoy;
  int sumaDiasPorMesA;
  int sumaDiasPorMesB;


  // dias sumados por mes a la fecha de hoy

  if (mesHoy == 1) {
     sumaDiasPorMesHoy = 0;
  }

  if (mesHoy == 2) {
      sumaDiasPorMesHoy = 31;
   }


  if (mesHoy == 3) {
  if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
  {
  sumaDiasPorMesHoy = 06;
  }
  else {
  sumaDiasPorMesHoy = 59;
}
}

  if (mesHoy == 4) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 91;
      }
      else {
      sumaDiasPorMesHoy = 90;
    }
     }

  if (mesHoy == 5) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 121;
      }
      else {
      sumaDiasPorMesHoy = 120;
    }
       }

  if (mesHoy == 6) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 152;
      }
      else {
      sumaDiasPorMesHoy = 151;
    }
         }

  if (mesHoy == 7) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 182;
      }
      else {
      sumaDiasPorMesHoy = 181;
    }
           }

  if (mesHoy == 8) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 213;
      }
      else {
      sumaDiasPorMesHoy = 212;
    }
           }

  if (mesHoy == 9) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 244;
      }
      else {
      sumaDiasPorMesHoy = 243;
    }
             }

  if (mesHoy == 10) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 274;
      }
      else {
      sumaDiasPorMesHoy = 273;
    };
             }

  if (mesHoy == 11) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 305;
      }
      else {
      sumaDiasPorMesHoy = 304;
    }
               }

  if (mesHoy == 12) {
     if ((anioHoy % 4 == 0) and (anioHoy % 100 != 0))
      {
      sumaDiasPorMesHoy = 335;
      }
      else {
      sumaDiasPorMesHoy = 334;
    }
                 }


  //======================================================================================================

  //dias sumados por mes a la fecha A



  if (mesA == 1) {
       sumaDiasPorMesA = 0;
    }

    if (mesA == 2) {
        sumaDiasPorMesA = 31;
     }


    if (mesA == 3) {
    if ((anioA % 4 == 0) and (anioA % 100 != 0))
    {
    sumaDiasPorMesA = 60;
    }
    else {
    sumaDiasPorMesA = 59;
  }
  }

    if (mesA == 4) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 91;
        }
        else {
        sumaDiasPorMesA = 90;
      }
       }

    if (mesA == 5) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 121;
        }
        else {
        sumaDiasPorMesA = 120;
      }
         }

    if (mesA == 6) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 152;
        }
        else {
        sumaDiasPorMesA = 151;
      }
           }

    if (mesA == 7) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 182;
        }
        else {
        sumaDiasPorMesA = 181;
      }
             }

    if (mesA == 8) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 213;
        }
        else {
        sumaDiasPorMesA = 212;
      }
             }

    if (mesA == 9) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 244;
        }
        else {
        sumaDiasPorMesA = 243;
      }
               }

    if (mesA == 10) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 274;
        }
        else {
        sumaDiasPorMesA = 273;
      };
               }

    if (mesA == 11) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 305;
        }
        else {
        sumaDiasPorMesA = 304;
      }
                 }

    if (mesA == 12) {
       if ((anioA % 4 == 0) and (anioA % 100 != 0))
        {
        sumaDiasPorMesA = 335;
        }
        else {
        sumaDiasPorMesA = 334;
      }
                   }
 //======================================================================================================
   //dias sumados por mes a la fecha A

    if (mesB == 1) {
         sumaDiasPorMesB = 0;
      }

      if (mesB == 2) {
          sumaDiasPorMesB = 31;
       }


      if (mesB == 3) {
      if ((anioB % 4 == 0) and (anioB % 100 != 0))
      {
      sumaDiasPorMesB = 60;
      }
      else {
      sumaDiasPorMesB = 59;
    }
    }

      if (mesB == 4) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 91;
          }
          else {
          sumaDiasPorMesB = 90;
        }
         }

      if (mesB == 5) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 121;
          }
          else {
          sumaDiasPorMesB = 120;
        }
           }

      if (mesB == 6) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 152;
          }
          else {
          sumaDiasPorMesB = 151;
        }
             }

      if (mesB == 7) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 182;
          }
          else {
          sumaDiasPorMesB = 181;
        }
               }

      if (mesB == 8) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 213;
          }
          else {
          sumaDiasPorMesB = 212;
        }
               }

      if (mesB == 9) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 244;
          }
          else {
          sumaDiasPorMesB = 243;
        }
                 }

      if (mesB == 10) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 274;
          }
          else {
          sumaDiasPorMesB = 273;
        };
                 }

      if (mesB == 11) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 305;
          }
          else {
          sumaDiasPorMesB = 304;
        }
                   }

      if (mesB == 12) {
         if ((anioB % 4 == 0) and (anioB % 100 != 0))
          {
          sumaDiasPorMesB = 335;
          }
          else {
          sumaDiasPorMesB = 334;
        }
                     }




//=====================================================================================================




 int diasTotalesHoy = sumaDiasPorAnioHoy + sumaDiasPorMesHoy + diaHoy + iHoy;
  int diasTotalesA = sumaDiasPorAnioA + sumaDiasPorMesA + diaA + iA;
  int diasTotalesB = sumaDiasPorAnioB + sumaDiasPorMesB + diaB + iB;



int distanciaA = abs (diasTotalesHoy - diasTotalesA);
int distanciaB = abs (diasTotalesHoy - diasTotalesB);


if (distanciaA > distanciaB) {
   cout << "La Fecha A es más lejana que la fecha B" << endl;
}
else {
   cout << "La fecha B es más lejana que la fecha A" << endl;
}



	return 0;
}
