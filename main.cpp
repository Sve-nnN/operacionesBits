#include <iostream>
#include <math.h>
using namespace std;
void generarVector(int *mensaje, int n){
  for (int i=0;i<n;i++){
    mensaje[i]=rand()%2;
  }
}
void mostrarVector(int *mensaje,int n){
  cout<<"\n";
  for(int i=0;i<n;i++){
    cout<<" "<<mensaje[i];
  }
  cout<<"\n";
}
void prenderApagarBits(int *m,int n){
  for(int i=0;i<n;i++){
    if(m[i]==0)m[i]=1;
    else m[i]=0;
  }
}
void switchBits(int *mensaje,int n){
  int aux=0;
  for(int i=0;i<n;i+=2){
    aux=mensaje[i];
    mensaje[i]=mensaje[i+1];
    mensaje[i+1]=aux;
  }
}
void convertirHex(int *mensaje, int n){
  int suma=0;
  for(int i=0;i<n;i++){
    suma+=(mensaje[i]*pow(2,7-i));
  }
  cout<<"\nLa suma de los bits es: "<<suma;
}
int main() {
  srand(time(NULL));
  int n=8;
  int *mensaje=new int[n];
  generarVector(mensaje, n);
  mostrarVector(mensaje, n);
  prenderApagarBits(mensaje, n);
  mostrarVector(mensaje, n);
  switchBits(mensaje, n);
  mostrarVector(mensaje, n);
  convertirHex(mensaje, n);
}