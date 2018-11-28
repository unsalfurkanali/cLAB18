/*IEEE Giresun SB CLAB18'
*28.11.2018 Çarşamba
*Celcius olarak girilen sıcaklık değerini fahrenheita çeviren program
*/
#include <stdio.h>

int main(void) {
  float c, f;                                 //Celcius ve fahrenheit değerleri tutmak için değişkenler
  c = 25;                                     //Celciusa başlangıç değeri olarak 25 atanıyor
  f = 1.8*c + 32;                             //Celcius, fahrenheita çevriliyor
  printf("F degeri = %f dir", f);             //Fahrenheit değeri ekrana bastırılıyor
  return 0;
}
