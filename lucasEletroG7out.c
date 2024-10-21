#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    //PEDINDO
    printf("INFORME VC VAI PARA 1.SALDO  2.EXTRATO  3.SAQUE 4.SAIR : ");
    scanf("%d", &numero);
    //SALDO
    if(numero==1){
    printf("SALDO");
    }
    //EXTRATO
    if(numero==2){
    printf("EXTRATO");
    }
    //SAQUE
    if(numero==3){
    printf("SAQUE");
    }
    //SAIR
    if(numero==4){
    printf("SAIR");
    }
    if(numero>4) {
    printf("inválido");
    }
}