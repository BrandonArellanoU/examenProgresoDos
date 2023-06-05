#include <stdio.h>  //Libreria que nos permite usar las funciones del programa
#include <stdlib.h> //Libreria que nos permite usar las funciones del programa
#include <string.h> //Libreria que nos permite usar las funciones del programa
#include <locale.h> //Libreria que nos permite usar las funciones del programa
#include <time.h>   //Libreria que nos permite usar las funciones del programa

// Creacion de la funcion menu y un arreglo unidimensional para las carreras
int Menu(int flag, int semestre[23][3]);
// Creacion de la funcion main que contiene el codigo principal
int main()
{
    // Se inicializan los numeros aleatorios
    srand(time(NULL));
    // Creacion de un arreglo tridimensional que contiene los 5 años, las 7 carreras y los 2 semestres.
    int semestre[23][3];
    // Creacion de la variable booleana flag para el menu
    int flag = 1;

    // Uso de doble del ciclo For para rellenar la matriz de alumnos matriculados con los datos generados por elcomando rand()
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            {
                semestre[23][3] = rand() % 11;
            }
        }
    }

    // Se pone en pantalla el menu hasta que el usuario decida cerrar el programa mientras la variable flag sea verdadera
    while (flag){
        flag = Menu(flag, semestre[23][3]);
    }

    return 0;
}
// Funcion que permite al usuario ver el Menu
int Menu(int flag, int semestre[23][3])
{
    // Creacion de las variables para que el usuario pueda ingresar la opcion que desee y la variablle que se encarga de verificar si la respuesta colocada por el usuario es correcta
    int opc, result;
    int Menu = 1; // Variable booleana para observar el menu

    // Uso de la variable booleana menumostrar para que cuando sea verdadera, muestre el menu
    while (Menu)
    {
        printf("------------------Bienvenido-------------------\n");
        printf("Ingrese el numero de la opcion que desea:\n 1.Promedio de calificaciones de cada alumno\n 2.Promedio del grupo de estudiantes por progreso\n 3.Mayor promedio de calificacoines durante el semestre\n 4. Salir del programa\n");
        printf("Su opcion es:");
        result = scanf("%d", &opc);
        // En caso de que la entrada ingresada no sea correcta, se limpia el buffer de entrada y se le pide que ingrese de nuevo otro dato
        while (result != 1)
        {
            while (getchar() != '\n')
                ; // Se encarga de limpiar el buffer de entrada

            printf("\nOpcion incorrecta. Ingrese un numero de nuevo: ");
            result = scanf("%d", &opc);
        }

        // Dependiendo de la eleccion elegida por el usuario, se ejecuta una serie de comandos gracias al condicional switch case
        switch (opc)
        {
        case 1:
            
        case 2:
            
        case 3:
        case 4:
            Menu = 0; // Se deja de visualizar el menu
            flag = 0; // La variable booleana se vuelve falsas y esto hace que se cierre el programa
            break;
        default:
            printf("\nRespuesta invalida. Ingrese de nuevo\n");
            break;
        }
        // Se coloca un texto que permite que el usuario despues de dar entre, vuelva al menu
        getchar();
        printf("Presione ENTER para regresar al menu...");
        getchar();
    }
    // Esto permite que mientras la variable siga siendo verdadera, se reinicie el menu
    return flag;
}