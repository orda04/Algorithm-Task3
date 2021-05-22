/*
**********  Second task on  Algorithm course                                         ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 16.05.2021                                                  ****
*/

// DONE●  Написать функцию проверки, является ли число простым

// проверку на простое число делаем по следующему принципу
//  1) все простые числа нечетные, потому сразу проверяем на четность путем проверки остатка деления на 2
//  2) последовательно делим наше число на все нечетные начинаем с тройки. как только находим сразу же 
//  выходим из цикла и выдаем сообщение что наше число делится на какое-то еще кроме единицы и дальнейшие
//  итерации уже не нужны так как оно уже не простое - а составное
//  проверка с помощью решета эратосфена на мой взгляд в данном случае излишняя

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//#include <iostream>
//using namespace std;
int main()
{

        bool flag=true;
        int digit;
        printf("Please enter your number: ");
        scanf("%d",&digit);
 if(digit!=2)
  {      
    if (!(digit%2))
    {
        flag =false;
        printf("Your digit can be divided by: 2 \n do not need to do all other iterations...\n");
    }
    else
    {
        for (int i=3;i<=sqrt(digit);i=i+2)
          {
           if (!(digit%i))
            {
             printf("Your digit can be divided by: %d \n do not need to do all other iterations...\n",i);
             flag=false;
             break;
            }

          }
      if(flag)
       {
        printf( "you digit can be divided only on 1 and digit itself\n" );
       }

   }
  }
 else
 {
   printf( "you digit can be divided only on 1 and digit itself\n" );
 }    
return 1;
}
