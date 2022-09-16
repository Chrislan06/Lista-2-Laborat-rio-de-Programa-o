#include <stdio.h>

int main(void) {
  short int escolha,confirmar;
  short int total = 0;
  short int votoP = 0, votoR = 0, branco = 0, nulo = 0;
  do {
    puts("\nVote agora na nossa urna eletrônica");
    puts("5-Paulo");
    puts("7-Renata");
    puts("0-Branco");
    puts("Qualquer outro numero-Nulo");
    puts("digite negativo para parar");
    printf("Escolha: ");
    scanf("%hd", &escolha);
    puts("Confirmar sua escolha?");
    puts("1-Sim");
    puts("qualquer outro numero-Não");
    printf("Escolha: ");
    scanf("%hd",&confirmar);
    if(confirmar == 1){
    if (escolha < 0)
      break;
    switch (escolha) {
    case 5:
      votoP++;
      break;
    case 7:
      votoR++;
      break;
    case 0:
      branco++;
      break;
    default:
      nulo++;
    }
    total++;
  }else{
      continue;
  }
} while (escolha >= 0);
  if (votoP == 0 && votoR == 0) {
    puts("\n\nNão Houve votação:");
  } else if (votoP == votoR) {
    printf("\n\nPorcentagens\nPaulo: %.2f\nRenata: %.2f\nBranco: %.2f\nNulo: "
           "%.2f\nEmpatou!",
           (float)votoP / total * 100, (float)votoR / total * 100,
           (float)branco / total * 100, (float)nulo / total * 100);
  } else if (votoP > votoR) {
    printf("\n\nPorcentagens\nPaulo: %.2f\nRenata: %.2f\nBranco: %.2f\nNulo: "
           "%.2f\nVencendor foi Paulo!",
           (float)votoP / total * 100, (float)votoR / total * 100,
           (float)branco / total * 100, (float)nulo / total * 100);
  } else {
    printf("\n\nPorcentagens\nPaulo: %.2f\nRenata: %.2f\nBranco: %.2f\nNulo: "
           "%.2f\nVencendor foi Renata!",
           (float)votoP / total * 100, (float)votoR / total * 100,
           (float)branco / total * 100, (float)nulo / total * 100);
  }
  return 0;
}