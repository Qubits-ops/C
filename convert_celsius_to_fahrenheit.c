#include <stdio.h>

int main(){
  float fahr,celsius;
  int mini,maxi,intervalle;

  mini = 0;
  maxi = 200;
  intervalle = 20;

  celsius = mini;

  while(celsius <= maxi){
    fahr = celsius * 9.0/5.0 + 32.0;
    printf("%6.1f\t%3.0f\n",celsius,fahr);
    celsius += intervalle;
  }

}
