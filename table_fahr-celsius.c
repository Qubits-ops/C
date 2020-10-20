#include <stdio.h>

int main(){
  int fahr,celsius;
  int mini,maxi,intervalle;

  mini = 0;
  maxi = 300;
  intervalle = 20;

  fahr = mini;
  while(fahr <= maxi){
    celsius = 5 * (fahr-32) / 9;
    printf("%3d\t%6d\n",fahr,celsius);
    fahr = fahr + intervalle;
  }
}
