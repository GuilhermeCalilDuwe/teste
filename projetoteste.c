#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
int main()
{

  setlocale(LC_ALL, "Portuguese_Brazil");
// vari�veis
    char nome[60], escolha,z;
    char carrinho1[25], carrinho2[25], carrinho3[25], carrinho4[25];
    float  qnt=0,rendaFinal;
    signed long long rendaInicial,rendaDoUsuario;
    long tv1=8000, tv2=6500, tv3=2000, pc1=11000, pc2=2000, pc3=6000, nt1=2500, nt2=4500, nt3=15000, tb1=8000, tb2=2000, tb3=1400, sp1=500, sp2=900, sp3=4800;
    int aux, quer,quantos,invalido, quantos1, quantos2, quantos3, quantos4, car;

     //introdu��o da loja
car=0;
printf("\r Ol�, meu nome � Jaime!\n\r Sou seu assistente virtual e estou aqui para te ajudar nas compras pela loja de eletr�nicos Teknacon \n");

     //cadastro de dados e informa��es
printf("\rPara come�ar gostaria de saber seu nome: \n");
scanf("%[^\n]" , nome);

fflush(stdin);

printf("\r Agora, por favor digite seu or�amento para as compras de hoje:\n");
scanf("%lld" , &rendaDoUsuario);
while(rendaDoUsuario<=0){
    printf("Or�amento inv�lido, por favor digite um or�amento maior que zero para as compras\n");
    scanf("%lld", &rendaDoUsuario);
}

fflush(stdin);
//looop,para verificar se o usuario quer trocar seus dados!
//utiliza-se aux para, uma troca de valores associados a duas vari�veis.
printf("\r seu nome : %s e seu or�amento: %lld est�o armazenados no sistema! Digite 0 se deseja mudar ou qualquer numero para continuar: \n", nome,rendaDoUsuario);
fflush(stdin);
scanf("%d", &aux);

fflush(stdin);
while(!aux){
            fflush(stdin);
            printf("Me diga seu nome\n");
            scanf("%[^\n]",nome);
            printf("\r Agora, digite seu or�amento para as compras de hoje\n");
            scanf("%lld", &rendaDoUsuario);
            while(rendaDoUsuario<=0){
            printf("Or�amento inv�lido, por favor digite um or�amento maior que zero para as compras\n");
            scanf("%lld", &rendaDoUsuario);
            }
            printf("\r seu nome : %s e seu or�amento: %lld estao armazenados no sistema! Digite 0 se deseja mudar ou qualquer numero para continuar: \n", nome,rendaDoUsuario);
            scanf("%d" , &aux);

 }
rendaInicial=rendaDoUsuario;
printf("\r Vamos a algumas instru��es.\n Quando desejar encerrar sua compra basta informar a letra 'z' para qualquer pergunta que eu fizer.\n Sen�o desejar comprar um produto que eu te sugerir informe 0 (zero)");

printf("\r Agora podemos comecar as listas de compra de acordo com o que desejar e lembre de escolher bem!");

/* Comando pra limitar a quantidade em 4 e pra parar o c�digo quando o usu�rio apertar z */

do{
while(escolha!='z' && qnt<4){


    //vendendo o/////

     fflush(stdin);

 printf("\n\n\r Em nossa loja nos temos varios produtos e por isso farei perguntas para te ajudar! \n Come�aremos pelo tamanho e fun��es basicas! O que voc� prefere? \n\na) Telas para filmes series e canais anal�gicos com mais de 17 polegadas.\nb) Temos eletr�nicos mais pesados para trabalho, jogos e etc, tamb�m com mais de 17 polegadas.\nc) Temos aparelhos telas entre 12 a 17 polegadas, tamb�m com utilidade multipla, pra voc� evar pro trabaho!\nd) Outra op��o sao as Telas de 7 a 11 polegadas, telas pequena porem com grande capacidade, idea para presentar crian�as e pra ler.\ne) Por fim temos telas de ate 6 polegadas, onde liga��es s�o mais usuais .\n\n");
 printf("escolha o tipo de produto que deseja ver as variedades: ");
 scanf("%s", &escolha);
 invalido=0;

    // caso o usu�rio escolha comprar uma tv

    if( escolha == 'a' ){
         printf("\n \n Nossas Smart TVs s�o todas maiores que 17 polegadas!. OK , agora preciso saber:\n O que voce gostaria de fazer com este tipo de aparelho? darei alguns exemplos para simplificar :\na)Gostaria de obter uma tv com um campo de vis�o mais amplo, gerando grande imers�o!.\nb)Ou talvez uma tv com tecnologia de gera��o de imagens para apresentar as cores de maneira rica e pura.\nc) E uma tv simples que faz suas tarefas de mareira funcional e atualizada?. Qual voc� deseja saber mais sobre?");
         scanf("%s",&escolha);
                switch(escolha){

                 case 'a':
                  printf("\n Parece que voc� escolheu a nossa Smart TV de Tela Curva! Ela oferece um maior campo de vis�o, \n por conta da imagem dobrada nas pontas! \n O pre�o dela esta em R$8.000,00.\n Se deseja coloca-lo em seu carrinho digite 1'");
                  scanf("%d", &quer);

                   // isso aqui � para o usu�rio selecionar se quer ou n�o o produto que quis ver mais detalhes//

                  if (quer == 1){
                  printf("quantos desse �tem voc� quer?");
                  scanf("%d", &quantos);
                  while(quantos<0){
                  printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                  printf("\n quantos desse �tem voc� quer?\n");
                  scanf("%d", &quantos);
                  }
                  if(quantos==0){
                  printf("O �tem N�O foi adicionada ao seu carrinho") ;
                  }
                  else if (quantos!=0){
                 (rendaDoUsuario=rendaDoUsuario-tv1*quantos);
                  if (rendaDoUsuario<0){
                  printf("\n o valor da Tv de tela curva ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                 (rendaDoUsuario=rendaDoUsuario+tv1*quantos);
                  }
                  else if (rendaDoUsuario>0) {
                  printf("\n Ok, a Smart Tv de tela curva foi adicionada ao carrinho!");
                  qnt++;
                  (car=car+1);
                  }
                  }
                  }

                  else if (quer == 0){
                  printf("O �tem N�O foi adicionada ao seu carrinho") ;
                  }


                  // carrinho e como a gente ta colocando //

                   if (car == 1){
                   strcpy(carrinho1,"Smart TV de Tela Curva");
                   quantos1= quantos;
                   }
                   if (car == 2){
                   strcpy(carrinho2,"Smart Tv de Tela Curva");
                   quantos2= quantos;
                   }
                   if (car == 3){
                   strcpy(carrinho3,"Smart TV de Tela Curva");
                   quantos3= quantos;
                   }
                   if (car == 4){
                   strcpy(carrinho4,"Smart Tv de Tela Curva");
                   quantos4= quantos;
                   }



                 break;


                 case 'b':
                  printf("\n Voc� selecionou a Smart TV de Tela QLED!\n Ela oferece qualidade de imagem superior e menos consumo de energia em um novo tipo de display.\n O pre�o dela est� em R$ 6.500,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                  scanf("%d", &quer);
                  if (quer == 1){
                  printf("quantos desse �tem voc� quer?");
                  scanf("%d", &quantos);
                  while(quantos<0){
                  printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                  printf("\n quantos desse �tem voc� quer?\n");
                  scanf("%d", &quantos);
                  }
                  if(quantos==0){
                  printf("O �tem N�O foi adicionada ao seu carrinho") ;
                  }
                  else if (quantos!=0){
                 (rendaDoUsuario=rendaDoUsuario-tv2*quantos);
                  if (rendaDoUsuario<0){
                  printf("\n O valor da Smart TV e tela com tecnologia QLED ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                  (rendaDoUsuario=rendaDoUsuario+tv2*quantos);
                  }

                  else if (rendaDoUsuario>0) {
                  printf("\n Ok, a Smart Tv  de tela QLED foi adicionada ao carrinho!");
                  qnt++;
                  (car=car+1);
                  }
                  }
                  }
                  else if (quer == 0 ){
                    printf("O �tem N�O foi adicionado ao seu carrinho");
                  }
                    // cariinho//
                     if (car == 1){
                     strcpy(carrinho1,"Smart TV de Tela QLED");
                     quantos1= quantos;
                     }
                     if (car == 2){
                     strcpy(carrinho2,"Smart Tv de Tela QLED");
                     quantos2= quantos;
                     }
                     if (car == 3){
                     strcpy(carrinho3,"Smart TV de Tela QLED");
                     quantos3= quantos;
                     }
                     if (car == 4){
                     strcpy(carrinho4,"Smart Tv de Tela QLED");
                     quantos4 = quantos;
                     }
                     break;


                 case'c':
                  printf("\n Voc� selecionou a Smart TV de Tela LED! Ela consome menos luz para exibir uma imagem, gastando menos energia que as televis�es LCD.\n O pre�o dela est� em R$ 2.000,00.\n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                  scanf("%d", &quer);
                  if (quer == 1){
                  printf("quantos desse �tem voc� quer?");
                  scanf("%d", &quantos);
                  while(quantos<0){
                  printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                  printf("\n quantos desse �tem voc� quer?\n");
                  scanf("%d", &quantos);
                  }
                  if(quantos==0){
                  printf("O �tem N�O foi adicionada ao seu carrinho") ;
                  }
                  else if (quantos!=0){
                 (rendaDoUsuario=rendaDoUsuario-tv3*quantos);
                  if (rendaDoUsuario<0){
                  printf("\n o valor da Smart Tv de tela com LED ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                  (rendaDoUsuario=rendaDoUsuario+tv3*quantos);
                  }
                  else if (rendaDoUsuario>0) {
                  printf("\n Ok, a Smart Tv de tela com LED foi adicionada ao carrinho!");
                  qnt++;
                  (car=car+1);
                  }
                  }
                  }
                  else if (quer == 0){
                    printf("O �tem N�O foi adicionado ao seu carrinho");
                  }

                  // cariinho //

                  if (car == 1){
                  strcpy(carrinho1,"Smart TV de Tela Led");
                  quantos1= quantos;
                  }
                  if (car == 2){
                  strcpy(carrinho2,"Smart Tv de Tela Led");
                  quantos2=quantos;
                  }
                  if (car == 3){
                  strcpy(carrinho3,"Smart TV de Tela Led");
                  quantos3= quantos;
                  }
                  if (car == 4){
                  strcpy(carrinho4,"Smart Tv de Tela Led");
                  quantos4= quantos;
                  }


                 case 'z':
                 printf("Compras encerradas : ");
                 getchar();
                 break;
                 default:
                 printf("opcao invalida!");
                 invalido=1;
                 break;
                 }
                 }

                else if( escolha == 'b' )
                {

                printf("Baseado em sua escolha lhe oferecemos os Computadores desktop. Aqui na Teknacon temos excelentes op��es de computadores desktops potentes!\n Agora responda minha perguntas para que eu consiga te direcionar!: \n\na) Gostaria de jogar games em alta qualidade e performance alt�ssima? \nb) Talvez assistir videos ou filmes, e uso recreativo?\nc) Ou deseja digitar textos grandes e fazer edi��es de video?\n Qual  voc� deseja saber mais sobre? \n");
                scanf("%s",&escolha);

                      switch(escolha){
                      case 'a':
                      printf("Voc� se interessou pelo PC Gamer!\n Como o pr�prio nome j� sugere, ele � ideal para jogos e programas mais pesados que precisam de um processador com uma capacidade maior do que os computadores pro dia a dia. \n O pre�o dele est� em R$ 11.000,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                      scanf("%d", &quer);
                      if (quer == 1){
                      printf("quantos desse �tem voc� quer?");
                      scanf("%d", &quantos);
                      while(quantos<0){
                      printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                      printf("\n quantos desse �tem voc� quer?\n");
                      scanf("%d", &quantos);
                      }
                      if(quantos==0){
                      printf("O �tem N�O foi adicionada ao seu carrinho") ;
                      }
                      else if (quantos!=0){
                      (rendaDoUsuario=rendaDoUsuario-pc1*quantos);
                      if (rendaDoUsuario<0){
                      printf("\n O valor do Pc Gamer ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                      (rendaDoUsuario=rendaDoUsuario+pc1*quantos);
                      }
                       else if (rendaDoUsuario>0) {
                       printf("\n Ok, o PC Gamer foi adicionada ao carrinho!");
                       qnt++;
                       (car=car+1);
                      }
                      }
                      }
                      else if (quer == 0){
                        printf(" O �tem N�O foi adicionado ao seu carrinho");
                      }

                      // carrinho//

                      if (car == 1){
                      strcpy(carrinho1,"PC Gamer");
                      quantos1= quantos;
                      }
                      if (car == 2){
                      strcpy(carrinho2,"PC Gamer");
                      quantos2= quantos;
                      }
                      if (car == 3){
                      strcpy(carrinho3,"PC Gamer");
                      quantos3= quantos;
                      }
                      if (car == 4){
                      strcpy(carrinho4,"Pc Gamer");
                      quantos4= quantos;
                      }

                      break;


                      case 'b':
                      printf("Voc� selecionou o PC com processador i3! \n Ele tem 2GB de mem�ria RAM e um HD de 500GB!\n Esse computador � indicado para tarefas mais leves do dia a dia! Seu pre�o � de R$ 2.000,00.\n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                      scanf("%d", &quer);
                      if (quer == 1){
                      printf("quantos desse �tem voc� quer?");
                      scanf("%d", &quantos);
                      while(quantos<0){
                      printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                      printf("\n quantos desse �tem voc� quer?\n");
                      scanf("%d", &quantos);
                      }
                      if(quantos==0){
                      printf("O �tem N�O foi adicionada ao seu carrinho") ;
                      }
                      else if (quantos!=0){
                      (rendaDoUsuario=rendaDoUsuario-pc2*quantos);
                      if (rendaDoUsuario<0){
                      printf("\n O valor do PC i3 de 500gb ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                      (rendaDoUsuario=rendaDoUsuario+pc2*quantos);
                      }
                      else if (rendaDoUsuario>0) {
                      printf("\n Ok, o Pc i3 de 500gb foi adicionada ao carrinho!");
                      qnt++;
                      (car=car+1);
                      }
                      }
                      }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao seu carrinho");
                      }

                    // carrinho //

                     if (car == 1){
                     strcpy(carrinho1,"PC i3");
                     quantos1= quantos;
                     }
                     if (car == 2){
                     strcpy(carrinho2,"PC i3");
                     quantos2= quantos;
                     }
                     if (car == 3){
                     strcpy(carrinho3,"PC i3");
                     quantos3= quantos;
                     }
                     if (car == 4){
                     strcpy(carrinho4,"PC i3");
                     quantos4= quantos;
                     }

                      break;
                      case'c':
                     printf("Voc� selecionou o PC com processador i5!\n Ele tem 8GB de mem�ria RAM e um SSD de 256GB! Esse computador � ideal para seu dia a dia ou para trabalho!\n Seus 8G de RAM permitem que voc� execute muitas tarefas ao mesmo tempo! \n Seu pre�o � de R$ 6.000,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                     scanf("%d", &quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                      (rendaDoUsuario=rendaDoUsuario-pc3*quantos);
                      if (rendaDoUsuario<0){
                      printf("\n O valor do PC i5 com 8gb de RAM  ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                      (rendaDoUsuario=rendaDoUsuario+pc3*quantos);
                      }
                       else if (rendaDoUsuario>0) {
                       printf("\n Ok, o Pc i5 com 8gb de RAM foi adicionada ao carrinho!");
                       qnt++;
                       (car=car+1);
                      }
                      }
                      }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao carrinho");

                      }

                     if (car == 1){
                     strcpy(carrinho1,"PC i5");
                     quantos1= quantos;
                     }
                     if (car == 2){
                     strcpy(carrinho2,"PC i5");
                     quantos2= quantos;
                     }
                     if (car == 3){
                     strcpy(carrinho3,"PC i5");
                     quantos3= quantos;
                     }
                     if (car == 4){
                     strcpy(carrinho4,"PC i5");
                     quantos4= quantos;
                     }
                      case 'z':
                     printf("Compras encerradas : ");
                     getchar();
                     break;
                      default:
                      printf("opcao invalida!");
                      invalido=1;
                      break;
                     }
                     }

        else if( escolha == 'c' )
             {
                 printf("Baseado em sua escolha eu o recomendo os notebooks.Em nossa loja temos v�rias op��es de notebooks!Cada um se adequa a um estilo de uso! \n Temos certeza que uma de nossas op��es vai combinar com voc�! Por favor responda as seguintes perguntas !: \n\na) Quer poder utilizar o aparelho em qualquer lugar e realizar tarefas mais simples?\nb) Talvez prefira realizar tarefas mais focado no ambito profissional(edi��o de videos,texto,etc)? \nc) Ou prefere focar nos jogos e ainda ter o poder da locomo��o?\n");
                 scanf("%s",&escolha);
                      switch(escolha){

                      case 'a':
                      printf("Voc� se interessou pelo Notebook com processador i3! \n Ele tem 2GB de mem�ria RAM, um HD de 256GB e pesa apenas 1,5kg! \n Seu pre�o � R$2.500,00! Ele � leve e pr�tico, ideal para te acompanhar pelo dia e te ajudar em suas tarefas mais simples! \n Se deseja coloc�-lo em seu carrinho digite 1");
                      scanf("%d", &quer);
                      if (quer==1){
                      printf("quantos desse �tem voc� quer?");
                      scanf("%d", &quantos);
                      while(quantos<0){
                      printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                      printf("\n quantos desse �tem voc� quer?\n");
                      scanf("%d", &quantos);
                      }
                      if(quantos==0){
                      printf("O �tem N�O foi adicionada ao seu carrinho") ;
                      }
                      else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-nt1*quantos);
                      if (rendaDoUsuario<0){
                      printf("\n O valor do Notebook i3 de 2gb de RAM ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                      (rendaDoUsuario=rendaDoUsuario+nt1*quantos);
                      }
                      else if (rendaDoUsuario>0) {
                      printf("\n Ok, o  Notebook i3 de 2gb de RAM foi adicionada ao carrinho!");
                      qnt++;
                      (car=car+1);
                      }
                      }
                      }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao carrinho");
                      }

                      // carrinho//

                     if (car == 1){
                     strcpy(carrinho1,"Notebook com processador i3");
                     quantos1= quantos;
                     }
                     if (car == 2){
                     strcpy(carrinho2,"Notebook com processador i3");
                     quantos2= quantos;
                     }
                     if (car == 3){
                     strcpy(carrinho3,"Notebook com processador i3");
                     quantos3= quantos;
                     }
                     if (car == 4){
                     strcpy(carrinho4,"Notebook com processador i3");
                     quantos4= quantos;
                     }

                     break;
                     case 'b':
                     printf("Legal! Voc� escolheu nosso Notebook com processador i5, ele tem 4GB de mem�ria RAM e um SSD de 256GB, pesando 2kg. \n Ele custa R$4.500,00! � um Notebook  intermedi�rio pra voc� que busca um �timo custo benef�cio! \n Se deseja coloc�-lo em seu carrinho digite 1\n");
                     scanf("%d",&quer);
                     if (quer==1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-nt2*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor do Notebook processador i5 com 8gb de Ram ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+nt2*quantos);
                     }
                     else if (rendaDoUsuario>0) {
                     printf("\n Ok, o notebook processador i5 com 8gb de Ram foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                     }
                     }
                     }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao carrinho");
                      }

                      // carrinho //

                      if (car == 1){
                      strcpy(carrinho1,"Notebook com processador i5");
                      quantos1= quantos;
                      }
                      if (car == 2){
                      strcpy(carrinho2,"Notebook com processador i5");
                      quantos2= quantos;
                      }
                      if (car == 3){
                      strcpy(carrinho3,"Notebook com processador i5");
                      quantos3= quantos;
                      }
                      if (car == 4){
                      strcpy(carrinho4,"Notebook com processador i5");
                      quantos4= quantos;
                      }

                     break;

                     case'c':
                     printf("Voc� escolheu o Notebook Gamer! \n � o eletr�nico perfeito pra voc� que quer toda a pot�ncia de um computador gamer mas na praticidade de um notebook!\n Ele custa R$ 15.000,00.\n Se deseja coloc�-lo em seu carrinho digite 1\n ");
                     scanf("%d", &quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                      }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-nt3*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor Notebook Gamer ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+nt3*quantos);
                     }
                     else if (rendaDoUsuario>0){
                     printf("\n Ok, o Notebook Gamer foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                      }
                      }
                      }
                     else if (quer == 0){
                     printf("O �tem N�O foi adicionado ao carrinho");
                     }

                     // carrinho//

                     if (car == 1){
                     strcpy(carrinho1,"Notebook Gamer");
                     quantos1= quantos;
                     }
                     if (car == 2){
                     strcpy(carrinho2,"Notebook Gamer");
                     quantos2= quantos;
                     }
                     if (car == 3){
                     strcpy(carrinho3,"Notebook Gamer");
                     quantos3= quantos;
                     }
                     if (car == 4){
                     strcpy(carrinho4,"Notebook Gamer");
                     quantos4= quantos;
                     }

                     case 'z':
                     printf("Compras encerradas : ");
                     getchar();
                     break;
                      default:
                      printf("opcao invalida!");
                      invalido=1;
                      break;

                     }
                     }


              else if( escolha == 'd' )
                  {
                 printf("Baseado em sua escolha lhe apresento os tablets da empresa Teknacon! Responda estas perguntas para termos ideia do que te recomendar!:\n \na) teria o interesse em desenhar e criar designs em um aparelho eletronico?\nb) Ou prefere escutar musicas e at� mesmo ouvir um radio?\nc) tamb�m pode preferir algo mais custo-beneficio e perfeito para o uso diario?\n");
                 scanf("%s",&escolha);
                      switch(escolha){
                      case 'a':
                      printf("Boa! Voc� escolheu o Tablet pra desenho! Ele tem um scanner de profundidade e uma caneta para desenho, perfeito para quem � artista! \n Al�m disso ele ainda tem um tela de 10.5 polegadas e 3 c�meras. \n Tudo isso pelo pre�o de R$ 8.000,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                      scanf("%d",&quer);
                      if (quer==1){
                      printf("quantos desse �tem voc� quer?");
                      scanf("%d", &quantos);
                      while(quantos<0){
                      printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                      printf("\n quantos desse �tem voc� quer?\n");
                      scanf("%d", &quantos);
                      }
                      if(quantos==0){
                      printf("O �tem N�O foi adicionada ao seu carrinho") ;
                      }
                      else if (quantos!=0){
                      (rendaDoUsuario=rendaDoUsuario-tb1*quantos);
                      if (rendaDoUsuario<0){
                      printf("\n O valor do Tablet com caneta para desenho ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                      (rendaDoUsuario=rendaDoUsuario+tb1*quantos);
                      }
                      else if (rendaDoUsuario>0){
                      printf("\n Ok, o Tablet com caneta para desenho foi adicionada ao carrinho!");
                      qnt++;
                      (car=car+1);
                      }
                      }
                      }
                     else if (quer == 0){
                     printf("O �tem N�O foi adicionado ao carrinho");
                     }

                       // carrinho //

                       if (car == 1){
                       strcpy(carrinho1,"Tablet de 6 polegadas");
                       quantos1=quantos;
                       }
                       if (car == 2){
                       strcpy(carrinho2,"Tablet de 6 polegadas");
                       quantos2=quantos;
                       }
                       if (car == 3){
                       strcpy(carrinho3,"Tablet de 6 polegadas");
                       quantos3=quantos;
                       }
                       if (car == 4){
                       strcpy(carrinho4,"Tablet de 6 polegadas");
                       quantos4=quantos;
                       }
                       break;



                       case 'b':
                       printf("Parece que voc� se interessou pelo Tablet r�dio e Tv! Ele tem 9 polegadas, 2 c�meras e, � claro, antena de r�dio e Tv! \n Seu pre�o � R$ 2.000,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                       ("%d", &quer);
                       if (quer==1){
                       printf("quantos desse �tem voc� quer?");
                       scanf("%d", &quantos);
                       while(quantos<0){
                       printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                       printf("\n quantos desse �tem voc� quer?\n");
                       scanf("%d", &quantos);
                       }
                       if(quantos==0){
                       printf("O �tem N�O foi adicionada ao seu carrinho") ;
                       }
                       else if (quantos!=0){
                       (rendaDoUsuario=rendaDoUsuario-tb2*quantos);
                       if (rendaDoUsuario<0){
                       printf("\n O valor Tablet de 9 polegadas e duas c�meras ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                       (rendaDoUsuario=rendaDoUsuario+tb2*quantos);
                       }
                       else if (rendaDoUsuario>0) {
                       printf("\n Ok, o Tablet de 9 polegadas e duas cameras foi adicionada ao carrinho!");
                       qnt++;
                       (car=car+1);
                       }
                       }
                       }

                       else if (quer == 0){
                       printf("O �tem N�O foi adicionado ao carrinho");
                       }

                       // carrinho //

                       if (car == 1){
                       strcpy(carrinho1,"Tablet de 6 polegadas");
                       quantos1=quantos;
                       }
                       if (car == 2){
                       strcpy(carrinho2,"Tablet de 6 polegadas");
                       quantos2=quantos;
                       }
                       if (car == 3){
                       strcpy(carrinho3,"Tablet de 6 polegadas");
                       quantos3=quantos;
                       }
                       if (car == 4){
                       strcpy(carrinho4,"Tablet de 6 polegadas");
                       quantos4=quantos;
                       }
                       break;



                     case'c':
                     printf("O Tablet Simples te chamou aten��o! Ele � perfeito para tarefas simples, como ver filmes e ler livros com sua tela de 6 polegadas! \n Ele tamb�m tem uma c�mera traseira e custa R$ 1.400,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                     scanf("%d", &quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-tb3*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor do Tablet de 6 polegadas ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+tb3*quantos);
                     }
                     else if (rendaDoUsuario>0){
                     printf("\n Ok, o Tablet de 6 polegadas foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                     }
                     }
                     }
                     else if (quer == 0){
                     printf("O �tem N�O foi adicionado ao carrinho");
                       }

                       //carrinho//

                       if (car == 1){
                       strcpy(carrinho1,"Tablet de 6 polegadas");
                       quantos1=quantos;
                       }
                       if (car == 2){
                       strcpy(carrinho2,"Tablet de 6 polegadas");
                       quantos2=quantos;
                       }
                       if (car == 3){
                       strcpy(carrinho3,"Tablet de 6 polegadas");
                       quantos3=quantos;
                       }
                       if (car == 4){
                       strcpy(carrinho4,"Tablet de 6 polegadas");
                       quantos4=quantos;
                       }
                       break;


                       case 'z':
                       printf("Compras encerradas : ");
                       getchar();
                       break;
                       default:
                       ("opcao invalida!");
                       invalido=1;
                       break;
                       }
                       }


            else if( escolha == 'e' )
            {
                 printf("Baseado em sua escolha lhe apresento os Smartphones da Teknacon! responda as perguntas para que apresentemos as melhores op��es pra voc�!: \n\na) Gostaria de fazer suas liga��es e mandar mensagens sem ter problemas tecnicos?\nb) Ou prefere passar o tempo usando as redes sociais e se divertindo?\nc) ou quer ter o equipamento certo para registrar suas fa�anhas?.  \n Gostaria de ver algum?");
                  scanf("%s",&escolha);
                     switch(escolha){
                     case 'a':
                     printf("Voc� escolheu o Smartphone simples! Ele tem apenas uma c�mera e � ideal para quem deseja apenas telefonar! \n Custa apenas R$500,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                     scanf("%d",&quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-sp1*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor do Smartphone de uma c�mera ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+sp1*quantos);
                     }
                     else if (rendaDoUsuario>0) {
                     printf("\n Ok, o Smartphone de uma c�mera foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                     }
                     }
                     }
                     else if (quer == 0){
                     printf("O �tem N�O foi adicionado ao carrinho");
                     }

                     //carrinho//

                       if (car == 1){
                       strcpy(carrinho1,"Smartphone simples");
                       quantos1= quantos;
                       }
                       if (car == 2){
                       strcpy(carrinho2,"Smartphone simples");
                       quantos2= quantos;
                       }
                       if (car == 3){
                       strcpy(carrinho3,"Smartphone simples");
                       quantos3= quantos;
                       }
                       if (car == 4){
                       strcpy(carrinho4,"Smartphone simples");
                       quantos4= quantos;
                       }


                     break;
                     case 'b':
                     printf("Boa! Voc� escolheu o Smartphone SNS, o celular pra quem quer ficar conectado �s redes sociais! \n Ele tem duas c�meras e � otimizado pra quem quer um celular pra lazer! \n Seu pre�o � de R$ 900,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                     scanf("%d",&quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-sp2*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor do SmartPhone duas c�meras ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+sp2*quantos);
                      }
                     else if (rendaDoUsuario>0) {
                     printf("\n Ok, o Smartphone duas c�meras foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                      }
                      }
                     }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao carrinho");
                      }

                      //carrinho//

                      if (car == 1){
                      strcpy(carrinho1,"Smartphone SNS");
                      quantos1= quantos;
                      }
                      if (car == 2){
                      strcpy(carrinho2,"Smartphone SNS");
                      quantos2= quantos;
                      }
                      if (car == 3){
                      strcpy(carrinho3,"Smartphone SNS");
                      quantos3= quantos;
                      }

                      if (car == 4){
                      strcpy(carrinho4,"Smartphone SNS");
                      quantos4= quantos;
                      }
                     break;


                     case'c':
                     printf("Parece que voc� selecionou o Smartphone c�mera pro! \n Ele tem 5 c�meras e � perfeito tanto pro dia a dia tanto pra fazer fotos e v�deos profissionais! \n O pre�o dele � R$ 4.800,00. \n Se deseja coloc�-lo em seu carrinho digite 1 \n");
                     scanf("%d",&quer);
                     if (quer == 1){
                     printf("quantos desse �tem voc� quer?");
                     scanf("%d", &quantos);
                     while(quantos<0){
                     printf("\r quantidade inv�lida. \n Por favor insira uma quantidade maior que zero. Insira 0 se desejar cancelar a escolha do item");
                     printf("\n quantos desse �tem voc� quer?\n");
                     scanf("%d", &quantos);
                     }
                     if(quantos==0){
                     printf("O �tem N�O foi adicionada ao seu carrinho") ;
                     }
                     else if (quantos!=0){
                     (rendaDoUsuario=rendaDoUsuario-sp3*quantos);
                     if (rendaDoUsuario<0){
                     printf("\n O valor Smartphone de fotos profissionais ultrapassou seu or�amento,\n nao eh possivel adicionar item ao carrinho");
                     (rendaDoUsuario=rendaDoUsuario+sp3*quantos);
                     }
                     else if (rendaDoUsuario>0) {
                     printf("\n Ok, o Smartphone de fotos profissionais foi adicionada ao carrinho!");
                     qnt++;
                     (car=car+1);
                      }
                      }
                      }
                      else if (quer == 0){
                      printf("O �tem N�O foi adicionado ao carrinho");
                      }

                      //carrinho//

                      if (car == 1){
                      strcpy(carrinho1, "Smartphone c�mera pro");
                      quantos1= quantos;
                      }
                      if (car == 2){
                      strcpy(carrinho2, "Smartphone c�mera pro");
                      quantos2= quantos;
                      }
                      if (car == 3){
                      strcpy(carrinho3,"Smartphone c�mera pro");
                      quantos3= quantos;
                      }
                      if (car == 4){
                      strcpy(carrinho4,"Smartphone c�mera pro");
                      quantos4= quantos;
                      }

                     break;


                     case 'z':
                     printf("Compras encerradas : ");
                     getchar();
                     break;
                     default:
                     printf("opcao invalida!");
                     invalido=1;
                     break;
                     }
                     }

   } //while(invalido),apenas verifica se o numero/letra fornecido pelo usuario � valido, se nao for o programa volta ao menu.
  }while(invalido);{

   rendaFinal=rendaInicial-rendaDoUsuario;
     printf("\n\n Voc� terminou as suas compras! Suas escolhas foram: \n");
     if(car==0){
     printf("\n voc� n�o comprou nada!");
     }
     else if (car==1) {
     printf("%d %s\n", quantos1, carrinho1);
     }
     else if (car==2){
     printf("%d %s\n", quantos1, carrinho1);
     printf("%d %s\n", quantos2, carrinho2);
     }
     else if (car ==3){
     printf("%d %s\n", quantos1, carrinho1);
     printf("%d %s\n", quantos2, carrinho2);
     printf("%d %s\n", quantos3, carrinho3);
     }
     else if(car ==4){
     printf("%d %s\n", quantos1, carrinho1);
     printf("%d %s\n", quantos2, carrinho2);
     printf("%d %s\n", quantos3, carrinho3);
     printf("%d %s\n", quantos4, carrinho4);
     }

      printf("\n \nVoc� gastou:%2.f", rendaFinal);


     printf("\nObrigada por comprar na Teknacon!\n O valor restante do or�amento foi R$%lld. \nEu, Jaime, e o resto da equipe ficamos muito felizes em te atender, obrigado e volte sempre!", rendaDoUsuario);
  }
}
