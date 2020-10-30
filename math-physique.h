/*by Qubit-Ops*/
#ifndef MATH-PHYSIQUE_H_INCLUDED
#define MATH-PHYSIQUE_H_INCLUDED
#include <stdio.h>

int table_puissance(int m,int n){
	int i,p;
	p = 1;
	for(i = 1;i<=n;i++){
		p*=m;
	}
	return p;

}
int puissance(int m,int pui){
    int a=1;

    while(pui>=1) {
        a*=m;
        pui--;
    }
    printf("%d\n",a);

}
float conversion_fahr_celsius(int fahr){
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%.1f",celsius);
}
float conversion_celsius_fahr(float celsius){
    float fahr;
    fahr = celsius * 9.0/5.0 + 32.0;
    printf("%.1f\n",fahr);

};

float table_fahr_celsius(){
    float fahr,celsius;
    int mini,maxi,inter;

    mini = 0;
    maxi = 300;
    inter = 20;

    fahr = mini;

    while(fahr <= maxi){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr,celsius);
        fahr += inter;

    }



}

int quantite_de_mouvement(int Pv, int Vv, int Pc , int Vc){
    int Pi;
    Pi=(Pv*Vv)+(Pc*Vc);
    printf("la quantite de mouvement est: %d kg m/s a l'etat initial\n",Pi);
}

void energie_cinetique(int m,float v){
    float Ec;
    Ec = (1/2) * m * puissance(v,2);
    printf("l'energie cinetique vaut donc %.1f J\n",Ec);

}

int masse(int ro,int v){
    int ma;
    ma = ro * v;
    printf("la masse vaux %d\n",ma);
}
int masse_volumique(int m, int ro){
    int v;
    v = m/ro;
    printf("le volume vaux %d\n",v);
}

int additions(int nb1,int nb2){
    int resultat;
    resultat = nb1 + nb2;
    printf("%d\n",resultat);
}
int soustractions(int nb1,int nb2){
    int resultat;
    resultat = nb1 - nb2;
    printf("%d\n",resultat);
}
int mulitplication(int nb1,int nb2){
    int resultat;
    resultat = nb1 * nb2;
    printf("%d\n",resultat);
}
int division(int nb1,int nb2){
    if(nb2 == 0){
        printf("la division par 0 est impossible\n");
    }
    int resultat;
    resultat = nb1/nb2;
    printf("%d\n",resultat);


}
int fibo(int n){
    /*En developpement*/
    int pre,cou,i,sui;
    if(n < 2){
        return n;
    }
    else{
        pre = 1;
        cou = 1;
        for(i=2;i< n;n-2){
            sui = p + c;
            p = c;
            c = s;
        }
        return c;
    }

}

#endif // MATH-PHYSIQUE_H_INCLUDED
