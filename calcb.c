#include <stdlib.h>
#include <stdio.h>

int main()
{   int s;
    float x;
    printf("Введите сумму вклада в тысячах  ");
    scanf("%f",&x);
    printf ("Введите срок в днях  ");
    scanf ("%i",&s);
    if ((x>=10)&&(s>=0)&&(s<=365))
             {
              if (x<=100) if (s<=30) x*=0.9;
                          else if (s<=120) x*=1.02;
                               else if (s<=240) x*=1.06;
                                    else x*=1.12 ;
              else if (s<=30) x*=0.9;
                   else if (s<=120) x*=1.03;
                        else if (s<=240) x*=1.08;
                             else x*=1.15;
             printf("%f т.\n",x);
             }
    else printf("Ошибка, неправильно введены данные\n");    
    return 0;
}