#include "iostream"

using namespace std;


const int longCad = 20;
struct datos
{
    char nombreArticulo[longCad + 1];
    int cantidadPorUni;
    float precioPorUni;
    float costoPorArticulo;
} arreglo[100];


//Esta funcion será para leer los datos que ingrese la persona, se incluye la variable de cantidad de articulos
    void leerDatos(int cantiArticulos)
        {
    /*En este for es donde se van a ingresar todos los datos de la compra dependiendo de la cantidad de artículos que 
    se ingresó en la función main y estos datos se almacenarán en struct datos*/

            for (int i = 0; i < cantiArticulos; i++)
            {
                cout << endl << "Articulo " << i + 1 << endl;
                cout << endl << "Escriba el nombre del articulo: ";
                cin >> arreglo[i].nombreArticulo;
                cout << "Cantidad de unidades: ";
                cin >> arreglo[i].cantidadPorUni;
                cout << "Precio por unidad: $";
                cin >> arreglo[i].precioPorUni;
            }
        }

//Aquí inicia la función que calculará el costo por cada artículo incluido en la función anterior
    float costoArticulo(int cantiArticulos)
    {
        for (int i = 0; i < cantiArticulos; i++)
        {
            arreglo[i].costoPorArticulo = arreglo[i].precioPorUni * arreglo[i].cantidadPorUni;
      /*cout << arreglo[i].costoPorArticulo << " Aqui termina costo  por articulo" << endl;*/
        }    
    }

//Función que desplegará los 4 datos de la estructura para cada artículo comprado
    void verDatos(int cantiArticulos)
    {
        cout << endl << "****** E S T O  E S  L O  Q U E  P A G A R "<< char(181) << " ******" << endl;
        for (int i = 0; i < cantiArticulos; i++)
        {
            cout << endl << "Art" << char(161) << "culo " << i+1 << endl;
            cout << "----Nombre del articulo----- " << arreglo[i].nombreArticulo << endl;
            cout << "----Cantidad de unidades---- " << arreglo[i].cantidadPorUni << endl;
            cout << "----Precio por unidad------- $" << arreglo[i].precioPorUni << endl;
            cout << "----Costo total por el articulo-------------- $" << arreglo[i].costoPorArticulo << endl;
        
        }
    }

//En esta funcion es donde mostrará el costo total por la compra
    float costoTotal(int cantiArticulos, float costoT = 0)
    {
         for (int i = 0; i < cantiArticulos; i++)
        {
            costoT += arreglo[i].costoPorArticulo;
        }
        //cout << "Aqui es costo total " << costoT;
    return costoT;
    }


int main()
{
    int cantiArticulos;
    float costoT = 0;

    cout <<endl << "B I E N V E N I D @" << endl;
    cout << endl << "Ingrese la cantidad de art" << char(161) << "culos a incluir en su compra: ";
    cin >> cantiArticulos;
    cin.ignore();

    leerDatos(cantiArticulos);
    costoArticulo(cantiArticulos);
    verDatos(cantiArticulos);
    cout << endl << "T O T A L    A    P A G A R------------------ $" << costoTotal(cantiArticulos,costoT) << endl;

    cout << endl << "GRACIAS POR SU COMPRA <3" << endl;
return 0;
}