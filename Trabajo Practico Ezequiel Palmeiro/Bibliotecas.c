int sumar(int numero1,int numero2){
int respuesta;
respuesta=numero1+numero2;
return respuesta;
}
int restar(int numero1,int numero2){
int respuesta;
respuesta=numero1-numero2;
return respuesta;
}
int multiplicar(int numero1,int numero2){
int respuesta;
respuesta=numero1*numero2;
return respuesta;
}
float dividir(int numero1,int numero2){
float respuesta;
respuesta=(float)numero1/numero2;
return respuesta;
}
int factorial(int numero1)
{
    int i;
    long int resultado;

    resultado=1;

    for(i=1;i<=numero1;i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}
int factorial2(int numero2)
{
    int i;
    long int resultado;

    resultado=1;

    for(i=1;i<=numero2;i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}
