#include<iostream>
#include <conio.h>

using namespace std;
//subirlo a git las practicas que deja se ponen en formato de reporte 
//estructuras
struct direccion{
	char calle[20];
	int cp;
	char ciudad[20];
	
};
struct persona{
	char nombre[20];
	int edad;
	float estatura;
	struct direccion dire;
};

int main()
{
	struct persona p1[5],p2;
	for(int i=0;i<5;i++)
	{
	cout<<"nombre :";
	cin.getline(p1[i].nombre,20,'\n');
	cout<<"edad:";
	cin>>p1[i].edad;
	cout<<"estatura:";
	cin>>p1[i].estatura;
	cout<<"calle:";
	fflush(stdin);//para que no se salte el valor una ves y no se salte el bufer
	cin.getline(p1[i].dire.calle,20,'\n');
	//cin.getline(p1.dire.calle,20,'\n');
    }
	//mostrar lo guardado
	for(int i=0;i<5;i++)
	{
	cout<<endl<<"nombre guardado: "<<p1[i].nombre;
	cout<<endl<<"edad guardada: "<<p1[i].edad;
	cout<<endl<<"estatura guardada: "<<p1[i].estatura;
	cout<<endl<<"direccion guardada: "<<p1[i].dire.calle;
    }
	getch();
	return 0;
}
