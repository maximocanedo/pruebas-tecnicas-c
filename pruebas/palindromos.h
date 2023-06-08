#ifndef PALINDROMOS_H_INCLUDED
#define PALINDROMOS_H_INCLUDED

int comprobar_palindromos();

void quitarEspacios(char * cadena) {
    int j = 0;
    for(int i = 0; cadena[i] != '\0'; i++) {
        if(cadena[i] != ' ') {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j] = '\0';
}
void normalizar(char * texto) {
    quitarEspacios(texto);
    for(int i = 0; texto[i] != '\0'; i++) {
        texto[i] = std::toupper(texto[i]);
    }
}

bool esPalindromo(char * texto) {
    normalizar(texto);
    int length = 0;
    while(texto[length] != '\0')
        length++;
    int tope_mitad = (length % 2 == 0 ? length : length - 1) / 2
      , i = 0
      , coincidencias = 0;
    while(i < tope_mitad) {
        if(texto[i] == texto[length - 1 - i]) coincidencias++;
        i++;
    }
    return coincidencias == tope_mitad;
}

int comprobar_palindromos() {
    cout<<endl<<endl<<"\tComprobar palíndromo. "<<endl<<endl;
    char * cadena = new char[48];
    cout<<"Ingrese palabra o frase (Enter para terminar): ";
    cargarCadena(cadena, 48);
    while(strcmp(cadena, "")) {
        bool res = esPalindromo(cadena);
        cout<<endl<<endl<<"El texto ingresado "<<(res ? "es" : "NO es")<<" un palíndromo. "<<endl;
        cout<<"Ingrese palabra o frase (Enter para terminar): ";
        cargarCadena(cadena, 48);
    }

    return 0;
}

#endif // PALINDROMOS_H_INCLUDED
