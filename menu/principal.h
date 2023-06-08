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
        Item{2, "Calcular factorial", factorial},
        Item{3, "Balanceo de paréntesis", balanceo_parentesis},
        Item{-1, ""},
        Item{9, "Salir del programa", exitProgram}
    };
    const int cantidadOpciones = sizeof opciones / sizeof(Item);
    Menu principal("Pruebas técnicas", 1, opciones, cantidadOpciones);
    principal.graph();
    return 0;
}


#endif // PRINCIPAL_H_INCLUDED
