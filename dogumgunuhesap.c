#include <stdio.h>

int main() {
  int yil, ay, gun;
  int aylarin_günleri[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  printf("Lütfen doğum tarihinizi girin (örneğin: 1999 12 31): ");
  scanf("%d %d %d", &yil, &ay, &gun);

  int toplam_gun = gun;

  for (int i = 0; i < ay - 1; i++) {
    toplam_gun += aylarin_günleri[i];
  }

  printf("Doğum gününüz yılın %d. günüdür.", toplam_gun);

  return 0;
}