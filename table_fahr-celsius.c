#include <stdio.h>

int main(){
  float fahr,celsius;
  int mini,maxi,intervalle;

  mini = 0;
  maxi = 300;
  intervalle = 20;

  fahr = mini;
  while(fahr <= maxi){
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n",fahr,celsius);
    fahr = fahr + intervalle;
  }
}
