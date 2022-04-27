#include <stdio.h>
int length(char*);


int main(){
   deArraAValor("22555");
}

int deArraAValor(char* string){
   int total = 0;
   while(*string){
   int a = *string - 48;
   string += 1;
   total = total*10 + a;
   }
   return total;
}
