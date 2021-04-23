#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int Multiplos(int);
long int SumFibo(long long);
long long maxprim(long long);
long int prim(long long);
long long MaxPrim(long long);
long int capicuamax(int);
bool capicua(long  int);
long int multimin(int,int);
long int mcm(long int,long int);
long int cuadrosuma(int);
long int sumacuadrada(int);
long int diferenciacuadro(int);
bool esprim(long long);
long int numprim(int);
long long maxprod(int,long long a[],long int);
long long array[1000]={7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,
9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,
8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,
1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,
6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,
6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,
3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,
7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,
6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,
5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,
5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,
8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,
8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,9,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,
1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,
1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,
2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,
    0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,
8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,
0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,
7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0};
long long tripitago(int);
long long debprim(long long);
long long factorial(int);
long long cCelosia(int);

int main(){
    /*cout<<"Ejercicio 1:"<<Multiplos(1000)<<endl;
    cout<<"Ejercicio 2:"<<SumFibo(4000000)<<endl;
    cout<<"Ejercicio 3:"<<MaxPrim(600851475143)<<endl;
    cout<<"Ejercicio 4:"<<capicuamax(3)<<endl;
    cout<<"Ejercicio 5:"<<multimin(1,20)<<endl;
    cout<<"Ejercicio 6:"<<diferenciacuadro(100)<<endl;
    cout<<"Ejercicio 7:"<<numprim(1001)<<endl;
    cout<<"Ejercicio 8:"<<maxprod(13,array,1000)<<endl;
    cout<<"Ejercicio 9:"<<tripitago(1000)<<endl;*/
    cout<<"Ejercicio 10(error):"<<debprim(2000000)<<endl;
    //cout<<"Ejercicio 15(error):"<<cCelosia(9)<<endl;
    return 0;
}

//Ejercicio 1
int Multiplos(int a){
    int s=0;
    for(int i=0;i<a;i++){
        if(i%3==0 || i%5==0){
            s+=i;
        }
    }
    return s;
}
//Ejercicio 2
long int SumFibo(long long n){
    long int f1=1,f2=2,f3=0,sum=0;
    do{
        f3=f1+f2;
        if(f2%2==0){
            sum+=f2;
        }
        f1=f2;
        f2=f3;
    }while(f3<n);
    return sum;
}
//Ejercicio 3
long long maxprim(long long n){             //Esta y la siguiente función sirven con números pequeños
    long long max=1;
    for(long long i=1;i<=n;++i){
        if(prim(i)==2){
            if(n%i==0){
                if(max<i){
                    max=i;
                }
            }
        }
    }
    return max;
}
long int prim(long long n){
    long int a = 0;
    for(long int i=1;i<=n;i++){
        if(n%i == 0){
            a += 1;
        }
    }
    return a;
}
long long MaxPrim(long long num){           //Esta Solución la hice con ayuda de mi compañero Josue, mi solución era muy ineficiente
    long long max=1;
    for(long long i=2;num>1;i++){
        while(num%i==0){
            num/=i;
        }
        max=i;
    }
    return max;
}
//Ejercicio 4
long int capicuamax(int n){                         //Esta Solución la hice con mi compañero Josue
    long int max=1;
    for(int i=pow(10,n);i>pow(10,n-1);--i){
        for(int j=pow(10,n);j>pow(10,n-1);--j){
            if(capicua(i*j) == true && i*j>max){
                max=i*j;
            }
        }
    }
    return max;
}
bool capicua(long int numero){                      //Esta Solución la hice con mi compañero Josue
    size_t residuo;
    int valorAux=numero,palindromo=0;
    while (valorAux>0){
        residuo=valorAux%10;
        valorAux=valorAux/10;
        palindromo=palindromo*10+residuo;
    }
    if (palindromo==numero){
        return true;
    }
    else{
        return false;
    }
}
//Ejercicio 5
long int multimin(int m,int n){
    long int mult=1;
    for(int i=0;i<n;++i){
        mult=mcm(mult,mcm(m+i,n));
    }
    return mult;
}
long int mcm(long int a,long int b){
    int mult;
    int max;
    if(b==1){
        return 1;
    }
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    while(true){
        if(max%a==0 && max%b==0){
            mult=max;
            break;
        }
        else{
            max += 1;
        }
    }
    return mult;
}
//Ejercicio 6
long int cuadrosuma(int n){
    long int cuadro=0;
    for(int i=0;i<=n;++i){
        cuadro+=i;
    }
    cuadro*=cuadro;
    return cuadro;
}
long int sumacuadrada(int n){
    long int cuadro=0;
    for(int i=0;i<=n;++i){
        cuadro+=i*i;
    }
    return cuadro;
}
long int diferenciacuadro(int n){
    return cuadrosuma(n)-sumacuadrada(n);
}
//Ejercicio 7
long int numprim(int n){
    int a=0;
    long int num=0;
    for(int i=2;a<n;i++){
        if(esprim(i)==true){
            a+=1;
            num=i;
        }
    }
    return num;
}
//Ejercicio 8
long long maxprod(int n, long long a[],long int m){
    long long max=1;
    for(long int i=0;i<m-n;i++){
        long long aux=1;
        for(int j=0;j<n;j++){
            aux*=a[i+j];
        }
        if(aux>max){
            max=aux;
        }
    }
    return max;
}
//Ejercicio 9
long long tripitago(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=1;k<n;k++){
                if(i+j+k==n){
                    if(i*i+j*j==k*k){
                        return i*j*k;
                    }
                }
            }
        }
    }
}
//Ejercicio 10
bool esprim(long long n){                   //Esta y la siguiente función solo sirven con números menores
    for(long long i=2;i<n;i++){             //o igual a 200000
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
long long debprim(long long n){
    long long sum=0;
    for(long long i=n;i>=2;i--){
        if(esprim(i)==true){
            sum+=i;
            cout<<sum<<endl;
        }
    }
    return sum;
}
//Ejercicio 15
long long cCelosia(int n){                              //Los números son demasiado grandes para que
    return (factorial(2*n)/factorial(n))/factorial(n);  //nos de el resultado correcto
}
long long factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}


