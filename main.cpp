#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int INACTIVE[] = {0x0, 0x3};
const int ACTIVE[] = {0x3, 0xF};

#include "libraries/Basics.h"
#include "libraries/errores.h"
#include "libraries/rlutil.h"
#include "libraries/Menu.h"
// Pruebas
#include "pruebas/fibonacci.h"
#include "pruebas/factorial.h"
#include "pruebas/balanceo_parentesis.h"
#include "pruebas/palindromos.h"

// Menús
#include "menu/principal.h"

int main() {
    setlocale(LC_ALL, "");
    menuPrincipal();
    return 0;
}
