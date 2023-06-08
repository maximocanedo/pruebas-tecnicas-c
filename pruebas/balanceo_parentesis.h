#ifndef BALANCEO_PARENTESIS_H_INCLUDED
#define BALANCEO_PARENTESIS_H_INCLUDED

int balanceo_parentesis();

int contarCaracteres(char * text, char car) {
    int res = 0;
    for(int i = 0; text[i] != '\0';i++) {
        if(text[i] == car) res++;
    }
    return res;
}

int balanceo_parentesis() {
    cout<<endl<<"Balanceo de paréntesis"<<endl<<endl;
    char * text = new char[48];
    cout<<"Ingrese una oración: ";
    cargarCadena(text, 47);
    cout<<endl;
    int pa, pc;
    pa = contarCaracteres(text, '(');
    pc = contarCaracteres(text, ')');
    cout<<"Hay "<<pa<<" paréntesis de apertura, y "<<pc<<" de cerrado. "<<endl<<endl;
    if(pa == pc) cout<<"Los paréntesis están balanceados. "<<endl;
    else cout<<"Los paréntesis NO están balanceados. "<<endl;
    delete text;
    return 0;

}

#endif // BALANCEO_PARENTESIS_H_INCLUDED
