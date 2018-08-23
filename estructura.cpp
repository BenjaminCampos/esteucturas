#include<iostream>
#include<conio.h>
using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	
}alumno[3];

int main()
{
	for(int i=0;i<3;i++)
	{
		fflush(stdin);
		cout<<"nombre: ";
		cin.getline(alumno[i].nombre,20,'\n');
		cout<<"edad: ";
		cin>>alumno[i].edad;
		cout<<"promedio: ";
		cin>>alumno[i].promedio;
		cout<<endl;
	}
	if(alumno[0].promedio>alumno[1].promedio)
	{
		if(alumno[0].promedio>alumno[2].promedio)
		{
			cout<<"EL ALUMNO :"<<alumno[0].nombre<<" Con un promedio de: "<<alumno[0].promedio<<" tiene el mejor promedio:"<<endl;
	      
		}else
		    {
		    	cout<<"el alumno: "<<alumno[2].nombre<<" con un promedio de: "<<alumno[2].promedio<<" tiene el mejor promedio"<<endl;
			}
	}else if(alumno[1].promedio>alumno[2].promedio)
	{
		cout<<"el alumno: "<<alumno[1].nombre<<" con un promedio de: "<<alumno[1].promedio<<" tiene el mayor promedio"<<endl;
	}else{
		cout<<"el alumno: "<<alumno[2].nombre<<" con un promedio de: "<<alumno[2].promedio<<" tiene el mayor promedio"<<endl;
	}
	getch();
	return 0;
}

//hacer una estructura de tienda de musica o lo que sea
