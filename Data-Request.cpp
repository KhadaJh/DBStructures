#include <iostream>


using namespace std;
int main ()

{
    float edad [4];
    string name [4];
    
    
    cout<< "Vamos a ingresar los nombres y edades de cuatro personas distintas.\n\n";
    
	for (int i=0 ; i<4 ; i++)
    {
    	cout<<"Ingrese su primer nombre (Sin espacios): ";
        cin>>name[i];
    	
        cout<<"Ingrese su edad: ";
        cin>>edad[i];
    	
    		if (i<3)
			{
			cout<<"\n\nSiguiente persona\n\n";
			}
	}

	cout<<"\n\n\nHagamos un recuento de los registros.\n\n";
	
    for (int i=0 ; i<4 ; i++)
    {
 		 cout<< "Nombre de la persona #" << i+1 <<": "<< name[i] << ".\nEdad de la persona #"<< i+1 << ":  " << edad[i] <<".\n\n";
	}
}
