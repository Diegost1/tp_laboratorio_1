#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Recibe un número por el usuario y lo retorna
 * \return Numero ingresado por el usuario
 *
 */

int PedirNumero()
{   int numero;
    printf("\nIngresar un valor: ");
    scanf("%d",&numero);
    return numero;
}

/** \brief Recibe 2 variables num1 y num2, las suma y retorna la respuesta de dicha suma
 *
 * \param num1 Primer número ingresado por el usuario
 * \param num2 Segundo número ingresado por el usuario
 * \return retorna la respuesta de la suma
 *
 */

int suma(int num1,int num2)
{
    int resp;
    resp=num1+num2;
    return resp;
}

/** \brief Recibe 2 variables num1 y num2, las resta y retorna la respuesta de dicha resta
 *
 * \param num1 Primer número ingresado por el usuario
 * \param num2 Segundo número ingresado por el usuario
 * \return retorna la respuesta de la resta
 *
 */

int resta(int num1,int num2)
{
    int resp;
    resp=num1-num2;
    return resp;
}

/** \brief Recibe 2 variables num1 y num2, las multiplica y retorna la respuesta de dicha multiplicación
 *
 * \param num1 Primer número ingresado por el usuario
 * \param num2 Segundo número ingresado por el usuario
 * \return retorna la respuesta de la multiplicación
 *
 */

int multiplicacion(int num1,int num2)
{
    int resp;
    resp=num1*num2;
    return resp;
}

/** \brief Recibe 2 variables num1 y num2, las divide y retorna la respuesta de dicha división
 *
 * \param num1 Primer número ingresado por el usuario
 * \param num2 Segundo número ingresado por el usuario
 * \return retorna la respuesta de la división
 *
 */
int division(int num1, int num2)
{
    int resp;
    num1= DivisionPorCero(num1);
    num2= DivisionPorCero(num2);
    resp=num1/num2;
    return resp;
}

/** \brief Recibe 2 variables num1 y num2, calcula el factorial y retorna la respuesta de dicha factorización
 *
 * \param num1 Primer numero ingresado por el usuario
 * \param num2 Segundo numero ingresado por el usuario
 * \return retorna la respuesta de la factorización
 *
 */
int factorial(int num1, int num2)
{
    int fact=1;
    num1=ValidacionFactorial(num1);

    num2=ValidacionFactorial(num2);

    for (num2 = num1; num2 > 1; num2--)
    {
    fact = fact * num2;
    }
    return fact;
}

/** \brief Recibe 1 variable número, valida que no se pueda dividir con 0, en caso de hacerlo da un mensaje de error, en caso de que no sea 0, se debe ingresar nuevamente el valor y retorna
 *
 * \param  numero número igual a 0, utilizado para validar
 * \return retorna el numero diferente a 0
 *
 */

int DivisionPorCero(int numero)
{
    while(numero==0)
    {
        printf("ERROR, No se puede dividir por cero, Reingrese: ");
        numero=PedirNumero();

    }

    return numero;
}

/** \brief Recibe una variable numero para validar que no ingrese un numero negativo y da un mensaje de error, en caso de que no sea así, pide nuevamente el numero y retorna
 *
 * \param numero numero ingresado por el usuario para verificar que sea mayor a 0
 * \return retorna el numero mayor a 0
 *
 */

int ValidacionFactorial(int numero)
{
    while(numero<0)
          {
              printf("ERROR, Reingrese: ");
              numero=PedirNumero();
          }
        return numero;
}

int ValidacionDecimal(int numero)
{
    float num;
    while(numero==num)
    {
        printf("ERROR, Reingrese: ");
        num=PedirNumero();
    }

    return numero;
}

#endif // FUNCIONES_H_INCLUDED
