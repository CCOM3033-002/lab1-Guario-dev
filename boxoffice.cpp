/*
Lab 2 : Box office program
Nombre: Guarionex Vazquez Soto 
Núm. Est: 801-22-1825
*/

#include <iostream>
#include <iomanip>

using namespace std; 

int main (){

// declaramos las variables que vamos a usar para el programa 

    string movie_name;

    int adult_tickets , kid_tickets;
    double cost_adul , cost_kids;
    double gross_pay , net_pay , distri_pay;

// desplegamos el proposito de nuestro programa 

    cout << "\nThe purpose of this program is to calculate the gross and net income\nfrom an Box Office, calculating a percent to give to the movie distributer's.\n\n\t\tPress enter to continue:" << endl;
    cin.ignore();

// deplegamos un mensaje pidiendole al usuario que entre el nombre de la pelicula 
    cout << "\n\tEnter the name of the movie: ";

    getline (cin,movie_name);

// un mensaje pidiendo la cantidad de tickets de adulto vendidos para la pelicula 
    cout << "\n\tEnter the amount of Adult tickets sold: "; 

    cin >> adult_tickets; 

    cout << "\n\tEnter the amount of Kid tickets sold: ";

    cin >> kid_tickets; 

// hacemos la operacion para las ganancias de cada seccion
    
    cost_adul = 10.00 * adult_tickets;

    cost_kids = 6.00 * kid_tickets; 
    
// calculamos la paga bruta y la paga neta 

    gross_pay = cost_adul + cost_kids;

    net_pay = (cost_adul + cost_kids) * 0.20;

    distri_pay = gross_pay - net_pay; 
    
// desplegamos todos los resultados   
    cout << "\n\t" << "Movie name:\t\t" << "\""  << movie_name << "\"" << "\n\n\tAdult tickets:\t\t" << adult_tickets << "\n\n\tKids tickets:\t\t" << kid_tickets << endl; 

    cout << setprecision(2) << fixed << "\n\tThe gross pay is:\t$"<< gross_pay << "\n\n"<< "\t"<< "The net pay:\t\t$" << net_pay << endl; 

    cout << setprecision(2) << fixed << "\n\tThe Distributers pay:\t$" << distri_pay << endl;

    return 0;

}