#ifndef FACTORIAL_H_INCLUDED
#define FACTORIAL_H_INCLUDED

int factorial(int);


int _factorial(int n) {
    int res = n;
    if(n <= 1) {
        return 1;
    } else {
        for(int i = n; i >= 2; i--) {
            res *= i - 1;
        }
        return res;
    }
}

int factorial() {
    cout<<endl<<"\tCalcular factorial"<<endl<<endl;
    int n = 0;
    cout<<"Ingrese número: ";
    cin>>n;
    int res = _factorial(n);
    cout<<"El factorial de "<<n<<" es: "<<res<<". "<<endl;
    return 0;

}


#endif // FACTORIAL_H_INCLUDED
