#include <iostream>
using namespace std;

int main (){
  int N;
  cout << "N="; //fordere Eingabe in Konsole
  cin >> N; //Setze N = den eingegeben Wert

int f0=0; //Startwert 
int f1=1; //Startwert
int f = 0; //beliebig damit keine Fehlermeldung

if (N==f0)
    f = f0;
else if (N==f1)
    f = f1;
  else
    for (int i=2;i <=N; i++){
      f = f0 +f1;
      f0 = f1;
      f1 = f;
}


  cout <<"Die Fibonacci Folge von "<<N <<" ist ="<<f<< endl;
return 0;
}