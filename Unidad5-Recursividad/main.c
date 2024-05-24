#include "recursividad.h"

int main()
{
    int acumulador = 1;
    int n = 5;
    char* cad = "Hola";
    char* cad2 = "Hola como estas?";
    char* cad3 = "Anita, lava la tina";
    char* cad4 = "Arriba la BIRRA!!!";
    char* cadNumeros = "98432147";
    int resuPalidromo;
    int key = 10;
    int vec[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vecImpar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    int num = 91789498;
    int contador = 0;
    long long unsigned contadorOp = 0;
    tLista pl;

    crearLista(&pl);

    for(i = 0; i < sizeof(vec)/sizeof(int); i ++)
        insertarAlFinalRec(&pl, &vec[i], sizeof(int));


    mapRecursivoInv(&pl, imprimirEnteroPorConsola);
    puts("\n");
    mapRecursivo(&pl, imprimirEnteroPorConsola);
    puts("\n");
    printf("Factorial: %d\n", factorialRecCola(n, acumulador));
    printf("Factorial: %d\n", factorialRec(n));
    printf("Fibonacci: %u\n", fibonacci(n));
    printf("Fibonacci Rec: %u\n", fibonacciRec(n));
    printf("\nFibonacci Rec: %u\n", fibonacciRecCopia(n, &contador));
    printf("\nContador de recursiones: %d\n", contador);
    printf("Fibonacci PD: %u\n", fibonacciProgDinCopia(n, &contadorOp));
    printf("\nContador de operaciones: %llu\n", contadorOp);
    mostrarCadPorLetra(cad);
    puts("\n");
    mostrarCadPorLetraInv(cad);
    puts("\n");
    mostrarCadPorLetraIdaYVuelta(cad);
    puts("\n");
    mostrarCadConLetraMenos(cad);
    puts("\n");
    mostrarCadConLetraMenosInv(cad);
    puts("\n");
    mostrarCadConLetraMenosIdaYVuelta(cad);
    puts("\n");
    mostrarCadConLetraFinalMenosEnvoltorio(cad);
    puts("\n");
    mostrarCadConLetraFinalMenosInvEnvoltorio(cad);
    puts("\n");
    mostrarCadConLetraFinalMenosIdaYVueltaEnvoltorio(cad);
    puts("\n");
    mostrarEnteroPorDigito(num);
    puts("\n");
    mostrarEnteroPorDigitoInv(num);
    puts("\n");
    mostrarEnteroPorDigitoIdaYVuelta(num);
    puts("\n");
    mostrarEnteroConDigitoMenos(num, 10);
    puts("\n");
    mostrarEnteroConDigitoMenosInv(num, 10);
    puts("\n");
    mostrarEnteroConDigitoMenosIdaYVuelta(num, 10);
    puts("\n");
    mostrarEnteroConDigitoFinalMenos(num);
    puts("\n");
    mostrarEnteroConDigitoFinalMenosInv(num);
    puts("\n");
    mostrarEnteroConDigitoFinalMenosIdaYVuelta(num);
    puts("\n");
    printf("Suma de digitos %d: %d\n\n", num, sumarDigitosEntero(num));
    printf("Suma de digitos %s: %d", cadNumeros, sumarDigitosCadena(cadNumeros));

    acumulador = 0;
    mapArrayRec(vec, sizeof(vec)/sizeof(int), &acumulador, sumarEntero);
    printf("\n\nSuma con map de array: %d", acumulador);
    acumulador = 0;
    mapArrayRec(vec, sizeof(vec)/sizeof(int), &acumulador, sumarEnteroPar);
    printf("\n\nSuma pares con map de array: %d", acumulador);
    acumulador = 0;
    sumarNumerosPosParesArray(vec, sizeof(vec)/sizeof(int), &acumulador);
    printf("\n\nSuma pos pares con map de array: %d\n\n", acumulador);
    mapArrayRecInv(vec, sizeof(vec)/sizeof(int), &acumulador, imprimirEnteroPorConsola2);
    mapArrayRec(vec, sizeof(vec)/sizeof(int), &acumulador, imprimirEnteroPorConsola2);
    puts("\n");
    printf("Strchr de %s: %s", cad2, strchrRec(cad2, 'a'));
    puts("\n");
    printf("Strrchr de %s: %s", cad2, strrchrRecWrapper(cad2, 'a'));
    puts("\n");
    printf("2 elevado a la 12: %d", calcularPotencia(2, 12));
    puts("\n");
    printf("76 x 10: %d", calcularProducto(76, 10));
    puts("\n");
    printf("356 a binario: %d", decimalABinarioWrapper(356));
    puts("\n");
    printf("Algoritmo ackerman para m = 0, n = 0: %d", algoritmoAckerman(0, 0));
    puts("");
    printf("Algoritmo ackerman para m = 1, n = 1: %d", algoritmoAckerman(1, 1));
    puts("");    printf("Algoritmo ackerman para m = 2, n = 2: %d", algoritmoAckerman(2, 2));
    puts("");
    printf("Algoritmo ackerman para m = 3, n = 3: %d", algoritmoAckerman(3, 3));
    puts("\n");
    resuPalidromo = esPalindromoWrapper(cad2);    printf("ES PALINDROMO? %s - %s", resuPalidromo == ES_PALINDROMO? "SI" : "NO", cad2);
    puts("");
    resuPalidromo = esPalindromoWrapper(cad3);
    printf("ES PALINDROMO? %s - %s", resuPalidromo == ES_PALINDROMO? "SI" : "NO", cad3);
    puts("");
    resuPalidromo = esPalindromoWrapper(cad4);
    printf("ES PALINDROMO? %s - %s", resuPalidromo == ES_PALINDROMO? "SI" : "NO", cad4);
    puts("\n");
    mapArrayRec(vec, sizeof(vec)/sizeof(int), &acumulador, imprimirEnteroPorConsola2);
    puts("");
    printf("Elemento encontrado? %s", binarySearchRec2(&key, vec, sizeof(vec)/sizeof(int), 1, sizeof(int), cmpEnteros) == NULL? "NO" : "SI");
    puts("");
    printf("Elemento encontrado? %s", binarySearchRec2(&key, vecImpar, sizeof(vecImpar)/sizeof(int), 1, sizeof(int), cmpEnteros) == NULL? "NO" : "SI");
//    mostrarNCaracteres(cad, 3);
    return 0;
}
