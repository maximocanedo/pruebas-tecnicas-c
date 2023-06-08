#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

int fibonacci() {
    cout<<endl<<endl<<"\tIngres� el n�mero l�mite: ";
    int limit = 10;
    cin>>limit;
    int n = 1;
    int numeroAnterior = 0;
    cout<<endl<<"\t"<<numeroAnterior<<", 1";
    while(n + numeroAnterior <= limit) {
        int des = n;
        n = n + numeroAnterior;
        numeroAnterior = des;
        cout<<", "<<n;
    }
    cout<<endl<<endl;
    return 0;
}

#endif // FIBONACCI_H_INCLUDED
