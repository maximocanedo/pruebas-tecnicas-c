#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED

int menuPrincipal();
int exitProgram();



int exitProgram() {
    exit(0);
    return 0;
}
int menuPrincipal() {
    Item opciones[] = {
        Item{1, "Secuencia Fibonacci", fibonacci},
        Item{-1, ""},
        Item{9, "Salir del programa", exitProgram}
    };
    const int cantidadOpciones = sizeof opciones / sizeof(Item);
    Menu principal("Pruebas t�cnicas", 1, opciones, cantidadOpciones);
    principal.graph();
    return 0;
}


#endif // PRINCIPAL_H_INCLUDED
