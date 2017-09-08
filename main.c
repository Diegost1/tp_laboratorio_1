#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    int A;
    int B;
    int rta;

        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("\n2- Ingresar 2do operando (B=y)\n");
        printf("\n3- Calcular la suma (A + B)\n");
        printf("\n4- Calcular la resta (A-B)\n");
        printf("\n5- Calcular la division (A/B)\n");
        printf("\n6- Calcular la multiplicacion (A*B)\n");
        printf("\n7- Calcular el factorial (A!)\n");
        printf("\n8- Calcular todas las operaciones\n");
        printf("\n9- Salir\n");


    while(seguir=='s')
    {


        printf("\nIngresar opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                    {

                    A=PedirNumero();
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B)\n",B);
                    printf("\n3- Calcular la suma (A + B)\n");
                    printf("\n4- Calcular la resta (A-B)\n");
                    printf("\n5- Calcular la division (A/B)\n");
                    printf("\n6- Calcular la multiplicacion (A*B)\n");
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 2:
                    {
                    B=PedirNumero();
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (A + B)\n");
                    printf("\n4- Calcular la resta (A-B)\n");
                    printf("\n5- Calcular la division (A/B)\n");
                    printf("\n6- Calcular la multiplicacion (A*B)\n");
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 3:
                    {
                    rta=suma(A, B);
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (%d + %d= %d)\n", A, B, rta);
                    printf("\n4- Calcular la resta (A-B)\n");
                    printf("\n5- Calcular la division (A/B)\n");
                    printf("\n6- Calcular la multiplicacion (A*B)\n");
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 4:
                    {
                    rta=resta(A, B);
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (%d + %d)\n", A, B);
                    printf("\n4- Calcular la resta (%d-%d=%d)\n", A, B, rta);
                    printf("\n5- Calcular la division (A/B)\n");
                    printf("\n6- Calcular la multiplicacion (A*B)\n");
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 5:
                    {
                    rta=division( A, B);
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (%d + %d)\n", A, B);
                    printf("\n4- Calcular la resta (%d-%d)\n", A, B);
                    printf("\n5- Calcular la division (%d/%d=%d)\n", A, B, rta);
                    printf("\n6- Calcular la multiplicacion (A*B)\n");
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 6:
                    {
                    rta=multiplicacion(A, B);
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (%d + %d)\n", A, B);
                    printf("\n4- Calcular la resta (%d-%d)\n", A, B);
                    printf("\n5- Calcular la division (%d/%d)\n", A, B);
                    printf("\n6- Calcular la multiplicacion (%d*%d=%d)\n", A, B, rta);
                    printf("\n7- Calcular el factorial (A!)\n");
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 7:
                    {
                    rta=factorial(A,B);
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    printf("\n3- Calcular la suma (%d + %d)\n", A, B);
                    printf("\n4- Calcular la resta (%d-%d)\n", A, B);
                    printf("\n5- Calcular la division (%d/%d)\n", A, B);
                    printf("\n6- Calcular la multiplicacion (%d*%d)\n", A, B);
                    printf("\n7- Calcular el factorial (A!=%d=%d)\n", A, rta);
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 8:
                    {
                    system("cls");
                    printf("\n1- Ingresar 1er operando(A=%d)\n",A);
                    printf("\n2- Ingresar 2do operando (B=%d)\n",B);
                    rta=suma(A, B);
                    printf("\n3- Calcular la suma (%d + %d= %d)\n", A, B, rta);
                    rta=resta(A, B);
                    printf("\n4- Calcular la resta (%d-%d= %d)\n", A, B, rta);
                    rta=division(A, B);
                    printf("\n5- Calcular la division (%d/%d= %d)\n", A, B, rta);
                    rta=multiplicacion(A, B);
                    printf("\n6- Calcular la multiplicacion (%d*%d=%d)\n", A, B, rta);
                    rta=factorial(A, B);
                    printf("\n7- Calcular el factorial (A!=%d=%d)\n", A, rta);
                    printf("\n8- Calcular todas las operaciones\n");
                    printf("\n9- Salir\n");
                    break;
                    }
            case 9:
                    {
                    seguir = 'n';
                    break;
                    }


            system("pause");
            return 0;
        }
    }




}
