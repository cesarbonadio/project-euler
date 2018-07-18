#include <stdio.h>
#include <stdlib.h>


int max_count = 0;
int actual_p = 0;


void count_d (int p){
     
     /*
     
        explicacion  de (p*(p-2*a) % (2*(p-a)) == 0) obviando b y c
        
        si se sabe que se trata del perímetro de un triángulo rectángulo 
        entonces se puede decir que:
                 
                 (a*a) + (b*b) = (c*c) (1)
                 a + b+ c = p (2)
                 
         se puede reescribir (2) como c = p-a-b , si te sustituye en (1):
                  
                (a*a) + (b*b) = (p-a-b)*(p-a-b)
                
         donde si se resuelve y se despeja b , entonces 
         
                b = ((p*p)-2pa)/(2p-2a))          
        
        Por lo tanto , solo se necesita chequear esta ecuacion.
        Ahora  (p*(p-2*a) % (2*(p-a)) == 0) es porque:

         si  b = ((p*p)-2pa)/(2p-2a))  entonces (p*(p-2*a) % (2*(p-a)) == 0) verifica que exista
         un valor de b y que dichas expresiones son proporcionales , siendo 1/b ó b la constante que 
         multiplica. 
        
        
        Además, si se tiene en cuenta que:
                
        si (a*a) + (b*b) es par, entonces c es par , por lo tanto p es par
        si (a*a) + (b*b) es impar, entonces c impar, por lo tanto p es impar
        (estas dos premisas por : a+b+c = p  ; par +par = par ; impar +impar = par)
        
        entonces solo se necesitan chequear los valores pares de p , por lo tanto incrementa en 2
        
        Además, solo se necesita chequear hasta (p/3) por que es el max valor que puede tomar 
        para algun p
     
     */

     int count =0;

     for (int a=2; a< (p/3); a++){
                 if (p*(p-2*a) % (2*(p-a)) == 0) {
                        count++;
          }
     }

    if (count>max_count){
        max_count= count;
        actual_p=p;
    }
}


int main (){

  for (int p=2; p<= 1000; p+=2 ){
      count_d(p);
  }

  printf("%i\n",actual_p);
  system("pause");
  return 0;

}