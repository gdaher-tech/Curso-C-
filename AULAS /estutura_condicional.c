# include <stdio.h>

int main(){

 int idade;

 printf("Qual é a sua idade? ");
 scanf("%d", &idade);

 if (idade > 18){
   printf("Você é maior de idade!");
 }else if (idade > 18 && idade < 60){
   printf("Voce é adulto");
 }else{
   printf("Você é idoso.");
 }


return 0;


}