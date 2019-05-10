#include "validaciones.h"
//**************************************************************************************************************
int validarNombre(char nombre[]){

int retorno =  -1;
int todoOk = 0;
    for(int i=0; i<strlen(nombre); i++)
    {
        if(isalpha(nombre[i]) == 0 ){

            todoOk = -1;
        }
    }
    if (todoOk == 0){
        retorno = 1;
    }
return retorno;
}
//***********************************************************************************************************
int validarInt(int min, int max ,char num[]){
    int validar = -1;
    int numero = 0;
    validar = isDigit(num);
    if (validar == 1){

        numero = charToInt(num);

        if (numero != 0 && numero >= min && numero <= max){
            validar = 1;
        }else {
        validar  =-1;
        }
    }
    return validar;
}
//**************************************************************************************************************
int validarFloat(int min, int max, char num[]){
    int validar = -1;
    float numero =0;
    int paraCompa = 0;
    validar = isDigit(num);
    if(validar == 1){


        numero = charToFloat(num);
        paraCompa = (int)numero;
