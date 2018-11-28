/*IEEE Giresun SB CLAB18'
*28.11.2018 Çarşamba
*Yarı çapı girilien bir çemberin alanını hesaplayan program
*/
#include <stdio.h>
#define PI 3.14                                     //PI değeri sabit olarak tanımlanıyor
/* define ile sabit tanımlanırken eşittir veya vigül kullanılmaz.
*  #define Sabit_adı Sabit_değeri biçiminde tanımlanır.
*  define ile tanımlanan sabitler bellekte yer kaplamaz
*/

int main(void) {
  float yariCap, alan;                    //Yarı çapı ve alanı tutmak için reel sayı değişkeni tanımlanıyor
  printf("Yari cap giriniz: ");           //Kullanıcıdan yarı çap bilgisi isteniyor
  scanf("%f", &yariCap);                  //Yarı çap bilgisi klavyeden okunuyor
  alan = PI*yariCap*yariCap;              //Alan hesaplanıyor 
  printf("Alan = %f", alan);              //Alan ekrana yazdırılıyor
  return 0;
}
