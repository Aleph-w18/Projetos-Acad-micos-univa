#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main ()
{
int apost1, apost2, apost3, apost4, apost5, apost6;
int Vsort1, Vsort2, Vsort3, Vsort4, Vsort5, Vsort6;
int contador = 0;

cin>>  apost1 >> apost2 >> apost3 >> apost4 >> apost5 >> apost6 ;

cin>> Vsort1 >> Vsort2 >> Vsort3 >> Vsort4 >> Vsort5 >> Vsort6;

if (apost1 == Vsort1 || apost1 == Vsort2 || apost1 == Vsort3  || apost1 == Vsort4 || apost1 == Vsort5 || apost1 == Vsort6){
  contador++;
}

if (apost2 == Vsort1 || apost2 == Vsort2 || apost2 == Vsort3  || apost2 == Vsort4 || apost2 == Vsort5 || apost2 == Vsort6){
  contador++;
}

 if (apost3 == Vsort1 || apost3 == Vsort2 || apost3 == Vsort3  || apost3 == Vsort4 || apost3 == Vsort5 || apost3 == Vsort6){
  contador++;
}

if (apost4 == Vsort1 || apost4 == Vsort2 || apost4 == Vsort3  || apost4 == Vsort4 || apost5 == Vsort5 || apost6 == Vsort6){
  contador++;
}

if (apost5 == Vsort1 || apost5 == Vsort2 || apost5 == Vsort3  || apost5 == Vsort4 || apost5 == Vsort5 || apost5 == Vsort6){
  contador++;
}

if (apost6 == Vsort1 || apost6 == Vsort2 || apost6 == Vsort3  || apost6 == Vsort4 || apost6 == Vsort5 || apost6 == Vsort6){
  contador++;
}

if (contador == 6 ){
  cout<< " sena ";
}
else if (contador == 5 ) {
  cout<< " quina ";
}

else if (contador == 4) {
  cout << " quadra "; 
}

else if (contador == 3) {
  cout << " terno "; 
}

else if (contador < 3) {
  cout << "Azar ";
}

}
	

