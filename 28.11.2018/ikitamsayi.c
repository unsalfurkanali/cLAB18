/*IEEE Giresun SB CLAB18'
*28.11.2018 Çarşamba
*İki tam sayıyı(integer) toplayan program
*/
#include <stdio.h>                  //Standart giriş-çıkış kütüphanesi ekleniyor

int main(void) {                    //main(ana) fonksiyon tanımlanıyor
  int a, b;                         //iki sayı tutmak için iki tane değişken tanımlanıyor
  a = 5;                            //değişken değer atamaları
  b = 8;
  printf("%d", (a+b));              //iki sayının toplamı ekrana yazılıyor
  return 0;
}
