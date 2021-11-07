//Comenzamos la implementación del algoritmo sobre el software de desarrollo y seguimiento físico

#include "stdafx.h"
#include"iostream"
#include"string"
#include"conio.h"
#include"stdio.h"
using namespace std;
using namespace System;


class usuario
{
private:
		int edad;//Edad del usuario
	    int peso;//Peso del usuario
		float altura;//Altura del usuario
		string nombre;//Nombre del usuario
		char sexo; //Género del usuario
		int ritmoCardiaco; //Número de pulsaciones
		int masa;  //Índice de masa corporal al inicio
		char prom; //El intervalo de edad del usuario(a,b,c,d)
		float vel; //Variable de la velocidad inicial
		float velo; //Variable de la velocidad alcanzada
		float ganancia;//Porcentaje que se ha ganado después de la rutina
		bool level; //Nivel en el que se encuentra el usuario a seguir
		int nivelmas;//Nivel de índice de masa corporal
		int nivelC;//Nivel según las pulsaciones
		int contra;//Contraseña dada por el sistema
		int usuarioP;
		
		
public:
	void IngresarNombre();
	void IngresarEdad();
	void IngresarPeso();
	void IngresarAltura();
	void NumeroPulsaciones();
	void Sexo();
	void imc();//Hallar índice de masa corporal
	void velocidad();
	void resistencia();
	void explosividad();
	void reflejos();
	void masaMuscular();
	void password();
	void confirmar();
};

void usuario::IngresarNombre()
{
	cout<<"\nPor favor escriba su nombre"<<endl;
	cin>>nombre;
}

void usuario::IngresarEdad()
{
	cout<<"\nPor favor escriba su edad"<<endl;
	cin>>edad;
	if(edad>=15&&edad<21)
	{
		prom='a';
	}
	else
	{
		if(edad>=21&&edad<30)
		{
			prom='b';
		}
		else
		{
			if(edad>=30&&edad<50)
			{
				prom='c';
			}
			else
			{
				if(edad>=50)
				{
					prom='d';
				}
			}

		}
	}

}

void usuario::IngresarPeso()
{
   cout<<"\nPor favor escriba su peso"<<endl;
	cin>>peso;
}

void usuario::IngresarAltura()
{
	cout<<"\nPor favor digite su altura en metros(Separe por punto)"<<endl;
	cin>>altura;
}

void usuario::NumeroPulsaciones()
{
	cout<<"\nPor favor ingrese su numero de pulsaciones por minuto(en reposo)"<<endl;
	cin>>ritmoCardiaco;
	if(ritmoCardiaco<60)
	{
	nivelC=1;
	cout<<"Usted goza de un excelente ritmo cardiaco"<<endl;
	}
	else
	{
		if(ritmoCardiaco>=60&&ritmoCardiaco<80)
		{
		nivelC=2;
		cout<<"Usted goza de un buen ritmo cardiaco"<<endl;
		}
		else
		{
			if(ritmoCardiaco>=80&&ritmoCardiaco<100)
			{
			nivelC=3;
			cout<<"Usted tiene un mal ritmo cardiaco"<<endl;
			}
			else
			{
			if(ritmoCardiaco>=100)
			{
			nivelC=4;
			cout<<"Su ritmo cardiaco es preocupante"<<endl;
			}
			}
		}
	}
	system("pause");
}

void usuario::Sexo()
{
	cout<<"\nPor favor escriba su genero (F/M)"<<endl;
	sexo=tolower(sexo);
	cin>>sexo;
}

void usuario::imc()
{
  masa=peso/(altura*altura);
  cout<<"Mensaje : \n";

 if(masa<=18)
 {
	 cout<<"Usted tiene deficit de masa corporal"<<endl;
	 nivelmas=1;
 }
 else
 {
	 if(masa>=18&&masa<25)
	 {
		 cout<<"Usted tiene una masa corporal estable"<<endl;
		 nivelmas=2;
	 }
	 else
	 {
		 if(masa>=25&&masa<=30)
		 {
			 cout<<"Usted tiene sobrepeso"<<endl;
			 nivelmas=3;
		 }
		 else
		 {
             if(masa>=30&&masa<=50)
		 {
			 cout<<"Usted tiene obesidad"<<endl;
			 nivelmas=4;
		 }
			 else
			 {
				 if(masa>=50)
		 {
			 cout<<"Usted tiene obesidad extrema"<<endl;
			 nivelmas=5;
		 }
			 }
		 }
	 }
 }
 system("pause");
}

void usuario::velocidad()
{
	char continuo='s';

	
	int M[6][6];
	int dias;
	if(sexo=='M')
	{
	cout<<"\n\n\n"<<nombre<<endl;
	cout<<"\nPor favor realice una prueba de velocidad, e ingrese su velocidad obtenida"<<endl;
	cin>>vel;
	level=true;

	switch(prom)
	{
	case 'a':
		if(vel<=16)
		{
			level=false;
		}
	case 'b':
		if(vel<=18)
		{
           level=false;
		}
	case'c':
		if(vel<=15)
		{
			level=false;
		}
	case'd':
		if(vel<=10)
		{
			level=false;
		}
		
	}

	if(level==true)
	{
		//Se comprueba que está en una velocidad promediamente correcta, y se busca el camino más corto para llegar al objetivo
		cout<<"Usted cuenta con una velocidad buena, por lo tanto, el seguimiento sera mas corto"<<endl;
		system("pause");
	}
	else
	{
		//Tiene que hacer el camino completo
		cout<<"Usted cuenta con una velocidad por debajo de lo esperado, por lo tanto, "<<endl;
		cout<<"el seguimiento sera mas largo\n\n\n"<<endl;
		system("pause");
	}

	
	//Ejercicios para mejorar la velocidad
	//Trotar 1.
	//Salto de lazo 2.
	//Aiobas 3.
	//Flexion con velocidad 4.
	//Skipping 5.
	//final 6.
	
	M[1][1]=0 ;  M[1][2]=0 ;  M[1][3]=0 ;  M[1][4]= 0;  M[1][5]= 0;  M[1][6]=0 ;
	M[2][1]=0 ;  M[2][2]=0 ;  M[2][3]=0 ;  M[2][4]=0 ;  M[2][5]=0 ;  M[2][6]=0 ;
	M[3][1]=0;   M[3][2]=0 ;  M[3][3]=0 ;  M[3][4]=0 ;  M[3][5]= 0;  M[3][6]= 0;
	M[4][1]=0 ;  M[4][2]=0 ;  M[4][3]=0 ;  M[4][4]=0 ;  M[4][5]= 0;  M[4][6]=0 ;
	M[5][1]=0 ;  M[5][2]= 0;  M[5][3]=0 ;  M[5][4]=0 ;  M[5][5]= 0;  M[5][6]=0 ;
	M[6][1]=0 ;  M[6][2]=0 ;  M[6][3]=0 ;  M[6][4]= 0;  M[6][5]= 0;  M[6][6]= 0;
	
	switch(nivelmas)
	{
	case 1:
		{
		M[1][2]=2;
		M[2][3]=5;
		M[3][4]=3;
		M[4][5]=5;
		M[5][6]=1;
		dias=16;
		break;
		}

	case 2:
		{
		M[1][2]=1;
		M[2][3]=2;
		M[3][4]=4;
		M[4][5]=3;
		M[5][6]=2;
		dias=12;
		break;
		}

	case 3:
		{
		M[1][2]=4;
		M[2][3]=1;
		M[3][4]=5;
		M[4][5]=4;
		M[5][6]=4;
		dias=18;
		break;
		}

	case 4:
		{
		M[1][2]=8;
		M[2][3]=2;
		M[3][4]=5;
		M[4][5]=3;
		M[5][6]=3;
		dias=24;
		break;
		}

	case 5:
		{
		M[1][2]=12;
		M[2][3]=3;
		M[3][4]=5;
		M[4][5]=10;
		M[5][6]=10;
		dias=40;
		break;
		}


	}
	}

	
 else
	{
    cout<<nombre<<endl;
	cout<<"\nPor favor realice una prueba de velocidad, e ingrese su velocidad obtenida"<<endl;
	cin>>vel;
	level=true;

	switch(prom)
	{
	case 'a':
		if(vel<=13)
		{
			level=false;
		}
	case 'b':
		if(vel<=16)
		{
           level=false;
		}
	case'c':
		if(vel<=12)
		{
			level=false;
		}
	case'd':
		if(vel<=7)
		{
			level=false;
		}
		
	}

	if(level==true)
	{
		//Se comprueba que está en una velocidad promediamente correcta, y se busca el camino más corto para llegar al objetivo
		cout<<"Usted cuenta con una velocidad buena, por lo tanto, el seguimiento sera mas corto"<<endl;
		system("pause");

	}
	else
	{
		//Tiene que hacer el camino completo
		cout<<"Usted cuenta con una velocidad por debajo de lo esperado, por lo tanto, el seguimiento sera mas largo"<<endl;
		system("pause");
	}

	
	//Ejercicios para mejorar la velocidad
	//Trotar 1.
	//Aiobas 3.
	//Salto de lazo 2.
	//Skipping 5.
	//Flexion con velocidad 4.
	//Piques largos 6.
   
	M[1][1]=0 ;  M[1][2]=0 ;  M[1][3]=0 ;  M[1][4]= 0;  M[1][5]= 0;  M[1][6]=0 ;
	M[2][1]=0 ;  M[2][2]=0 ;  M[2][3]=0 ;  M[2][4]=0 ;  M[2][5]=0 ;  M[2][6]=0 ;
	M[3][1]= 0;  M[3][2]=0 ;  M[3][3]=0 ;  M[3][4]=0 ;  M[3][5]= 0;  M[3][6]= 0;
	M[4][1]=0 ;  M[4][2]=0 ;  M[4][3]=0 ;  M[4][4]=0 ;  M[4][5]= 0;  M[4][6]=0 ;
	M[5][1]=0 ;  M[5][2]= 0;  M[5][3]=0 ;  M[5][4]=0 ;  M[5][5]= 0;  M[5][6]=0 ;
	M[6][1]=0 ;  M[6][2]=0 ;  M[6][3]=0 ;  M[6][4]= 0;  M[6][5]= 0;  M[6][6]= 0;
	
	switch(nivelmas)
	{
	case 1:
		M[1][2]=3;
		M[2][3]=2;
		M[3][4]=2;
		M[4][5]=4;
		M[5][6]=2;
		dias=13;
		break;

	case 2:
		M[1][2]=2;
		M[2][3]=2;
		M[3][4]=2;
		M[4][5]=2;
		M[5][6]=1;
		dias=9;
		break;

	case 3:
		M[1][2]=5;
		M[2][3]=1;
		M[3][4]=3;
		M[4][5]=1;
		M[5][6]=5;
		dias=15;
		break;

	case 4:
		M[1][2]=8;
		M[2][3]=2;
		M[3][4]=4;
		M[4][5]=2;
		M[5][6]=8;
		dias=24;
		break;

	case 5:
		M[1][2]=12;
		M[2][3]=2;
		M[3][4]=5;
		M[4][5]=2;
		M[5][6]=9;
		dias=30;
		break;
	
	}
	}

	system("cls");
	confirmar();
	cout<<"\n\nApreciado "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Trotar: "<<endl;
	cout<<"Consiste en recorrer una distancia significativa para usted, trotando, tomando aire por la nariz"<<endl;
		cout<<"Y soltarla fuertemente, por la boca"<<endl;
	cout<<"No se preocupe por el tiempo, solo trate de cumplirlo"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas, 2 Kms diariamente\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Salto de lazo: "<<endl;
	cout<<"Consiste en saltar sobre un lazo, sobre la punta de los pies, los dos pies a la vez"<<endl;
	cout<<"Haga las que pueda seguidas, y descanse por 3 minutos"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas, con un lazo proporcional a su altura\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Las famosas 'aiobas': "<<endl;
	cout<<"Consiste en un ejercicio de ir y volver, fije tres puntos frente a usted, uno a 3 metros"<<endl;
	cout<<"Otro a a 7 metros, y otro a 10 metros, todos enfrente suyo"<<endl;
	cout<<"A toda su velocidad, rodee el primer punto y regrese, luego al segundo y regrese"<<endl;
	cout<<"luego al tercero y regrese, hagalas hasta que se sienta capaz"<<endl;
    cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Posicion de flexion de brazo junto con velocidad de piernas: "<<endl;
	cout<<"Consiste en poner posicion de flexion de brazo, y llevar la pierna derecha adelante"<<endl;
	cout<<"y luego la izquierda, como correr en el puesto"<<endl;
	cout<<"Haga a su maximo nivel, y descanse hasta que se sienta capaz"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"5. Skipping: "<<endl;
	cout<<"Consiste en mover rapidamente sus piernas en un mismo lugar, hacia arriba y hacia abajo"<<endl;
	cout<<"con movimiento de 90 grados de los brazos"<<endl;
	cout<<"Comience de cero y vaya subiendo de nivel, hasta llegar a su 100%"<<endl;
	cout<<"Haga el ejercicio hasta que se sienta capaz, y descanse un minuto"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[5][6]<<" semanas\n\n\n\n"<<endl;
	system("pause");
	system("cls");


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor realice una prueba de velocidad, e ingrese su velocidad obtenida"<<endl;
	cin>>velo;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=velo-vel;
	ganancia=(resta/vel)*100;
	cout<<"Despues de este seguimiento en velocidad, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	
	
	
	
}

void usuario::resistencia()
{
	int nivelprimerC=nivelC;
	cout<<"Para mejorar su resistencia, tendremos en cuenta sus pulsaciones\n\n\n"<<endl;
	cout<<"Requisitos: "<<endl;
	cout<<"1.No sufrir de ninguna enfermedad cardiaca"<<endl;
	cout<<"2.Saber nadar lo basico"<<endl;
	int M[4][4];
	int i,j;
	int dias;
	if(sexo=='M')
	{
	for(i=1;i<=4;i=i++)
	{
		for(j=1;j<=4;j=j++)
			M[i][j]=0;
	}
	//Acabamos de crear la matriz del grafo a utilizar

	//Ejercicios para resistencia:
	//1.caminar
	//2.trotar
	//3.nadar
	switch(nivelC)
	{
	case 1:
		M[1][2]=1;
		M[2][3]=3;
		M[3][4]=3;
		dias=7;
		break;

	case 2:
		M[1][2]=2;
		M[2][3]=5;
		M[3][4]=5;
		dias=12;
		break;

	case 3:
		M[1][2]=5;
		M[2][3]=8;
		M[3][4]=3;
		dias=16;
		break;

	case 4:
		M[1][2]=8;
		M[2][3]=9;
		M[3][4]=3;
		dias=20;
		break;
	}
}


	else
	{

for(i=1;i<=4;i=i++)
	{
		for(j=1;j<=4;j=j++)
			M[i][j]=0;
	}
	//Acabamos de crear la matriz del grafo a utilizar

	//Ejercicios para resistencia:
	//1.caminar
	//2.trotar
	//3.nadar
	switch(nivelC)
	{
	case 1:
		M[1][2]=1;
		M[2][3]=4;
		M[3][4]=3;
		dias=8;
		break;

	case 2:
		M[1][2]=5;
		M[2][3]=5;
		M[3][4]=3;
		dias=12;
		break;

	case 3:
		M[1][2]=8;
		M[2][3]=8;
		M[3][4]=3;
		dias=16;
		break;

	case 4:
		M[1][2]=10;
		M[2][3]=8;
		M[3][4]=3;
		dias=20;
		break;
	}
	}
	
	system("cls");
	confirmar();
	cout<<"\n\nApreciado "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Caminar: "<<endl;
	cout<<"Consiste en Caminar durante media hora, relajarse y respirar hondo"<<endl;
	cout<<"No importa la distancia, lo que importa es caminar"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas \n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Trotar: "<<endl;
	cout<<"Consiste en recorrer una distancia significativa para usted, trotando, tomando aire por la nariz"<<endl;
	cout<<"Y soltarla fuertemente, por la boca"<<endl;
	cout<<"No se preocupe por el tiempo, solo trate de cumplirlo"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas, 4 Kms diariamente\n\n\n"<<endl;
	system("pause");	
	system("cls");


	cout<<"3.Nadar: "<<endl;
	cout<<"Consiste en sumergirse bajo el agua, moviendo su cuerpo"<<endl;
	cout<<"Y ejercitar sus brazos y piernas"<<endl;
	cout<<"No lo haga por velocidad, trate de sumergirse, y trasladarse a grandes distancias"<<endl;
	cout<<"bajo el agua"<<endl;
    cout<<"Hagala, y descanse 4 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor tome sus pulsaciones nuevamente en reposo e ingrese"<<endl;
	cout<<"el numero de pulsaciones obtenidas"<<endl;
	NumeroPulsaciones();
	system("cls");
	cout<<"Estamos analizando su resultado, y hallando su nivel de mejoramiento"<<endl;
    cout<<"Despues de este seguimiento en resistencia, hemos notado su mejoramiento"<<endl;
	system("pause");
	system("cls");
	cout<<"Usted ha pasado de estar en nivel "<<nivelprimerC<<" a nivel "<<nivelC<<endl;
	cout<<"La tabla es la siguiente\n"<<endl;

	
	cout<<"nivel=1"<<endl;
	cout<<"Usted goza de un excelente ritmo cardiaco\n\n"<<endl;
	cout<<"nivel=2"<<endl;
	cout<<"Usted goza de un buen ritmo cardiaco\n\n"<<endl;
	cout<<"nivel=3"<<endl;
	cout<<"Usted tiene un mal ritmo cardiaco\n\n"<<endl;
	cout<<"nivel=4"<<endl;
	cout<<"Su ritmo cardiaco es preocupante\n\n"<<endl;
	
	system("pause");


	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	
	

	system("pause");
}

void usuario::explosividad()
{
float distancia, distan;
int dias;
cout<<"Para hacer seguimiento a su explosividad, nos guiaremos por su indice de masa corporal\n\n"<<endl;
cout<<"Realice un salto sin impulso, y mida la distancia que logra alcanzar y digitela(centimetros)"<<endl;
cin>>distancia;
int M[6][6];
int i,j;

if(sexo=='M')
{
		for(i=1;i<=4;i=i++)
	{
		for(j=1;j<=4;j=j++)
			M[i][j]=0;
	}
	//Acabamos de crear la matriz del grafo a utilizar

	//Ejercicios para resistencia:
	//1.Deporte favorito
	//2.Sprint
	//3.Ultimate Frisbee
	//4.Salto largo
	//5.Kick Boxing ó boxeo
		switch(nivelmas)
	{
	case 1:
		{
		M[1][2]=1;
		M[2][3]=2;
		M[3][4]=2;
		M[4][5]=4;
		M[5][6]=3;
		dias=12;
		break;
		}

	case 2:
		{
		M[1][2]=2;
		M[2][3]=2;
		M[3][4]=1;
		M[4][5]=3;
		M[5][6]=3;
		dias=11;
		break;
		}

	case 3:
		{
		M[1][2]=4;
		M[2][3]=2;
		M[3][4]=3;
		M[4][5]=2;
		M[5][6]=3;
		dias=13;
		break;
		}

	case 4:
		{
		M[1][2]=6;
		M[2][3]=2;
		M[3][4]=3;
		M[4][5]=5;
		M[5][6]=3;
		dias=19;
		break;
		}

	case 5:
		{
		M[1][2]=10;
		M[2][3]=2;
		M[3][4]=3;
		M[4][5]=5;
		M[5][6]=5;
		dias=25;
		break;
		}


	}
}
else
{
		for(i=1;i<=4;i=i++)
	{
		for(j=1;j<=4;j=j++)
			M[i][j]=0;
	}
	//Acabamos de crear la matriz del grafo a utilizar

	//Ejercicios para resistencia:
	//1.Deporte favorito
	//2.Sprint
	//3.Ultimate Frisbee
	//4.Salto largo
	//5.Kick Boxing ó boxeo
		switch(nivelmas)
	{
	case 1:
		{
		M[1][2]=1;
		M[2][3]=2;
		M[3][4]=3;
		M[4][5]=5;
		M[5][6]=5;
		dias=16;
		break;
		}

	case 2:
		{
		M[1][2]=2;
		M[2][3]=1;
		M[3][4]=3;
		M[4][5]=3;
		M[5][6]=5;
		dias=14;
		break;
		}

	case 3:
		{
		M[1][2]=4;
		M[2][3]=2;
		M[3][4]=5;
		M[4][5]=2;
		M[5][6]=3;
		dias=16;
		break;
		}

	case 4:
		{
		M[1][2]=6;
		M[2][3]=3;
		M[3][4]=3;
		M[4][5]=2;
		M[5][6]=4;
		dias=18;
		break;
		}

	case 5:
		{
		M[1][2]=10;
		M[2][3]=3;
		M[3][4]=4;
		M[4][5]=2;
		M[5][6]=4;
		dias=23;
		break;
		}


	}

}

	system("cls");
	confirmar();

cout<<"\n\nApreciado "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Practicar su deporte favorito: "<<endl;
	cout<<"Consiste en jugar o practicar su deporte favorito en los días de rutina"<<endl;
		cout<<"Trate de dar lo mejor de usted, en cada partido ó encuentro"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Sprintar: "<<endl;
	cout<<"En este ejercicio, será muy importante su concentración"<<endl;
	cout<<"enfoquese, y haga piques fuertes y explosivos de 20 metros"<<endl;
	cout<<"Si tiene guayos, y es en campo apropiado, seria mejor"<<endl;
	cout<<"Haga un sprint fuerte, y descanse por tres minutos"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Ultimate Frisbee: "<<endl;
	cout<<"Es un deporte que le vendra muy bien a su explosividad"<<endl;
	cout<<"Trate de practicar lanzamientos 'backhand' y 'forehand'"<<endl;
	cout<<"A toda su velocidad, tome impulso, y lance el disco"<<endl;
	cout<<"tambien trate de atrapar el disco en el aire"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Salto largo: "<<endl;
	cout<<"Basado en la disciplina de salto largo"<<endl;
	cout<<"Tome un impulso de 9 metros con respecto a la linea de salto"<<endl;
	cout<<"Haga a su maximo nivel, y a toda su explosividad"<<endl;
	cout<<"un salto fuerte, hagalo, y descance 3 minutos"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"5. Kick boxing o boxeo: "<<endl;
	cout<<"Trabaje con los colchones de golpeo"<<endl;
	cout<<"Haga combos de golpes con todas sus fuerzas por 10 segundos"<<endl;
	cout<<"Haga el ejercicio, tambien utilice las piernas, y descanse un minuto"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[5][6]<<" semanas\n\n\n\n"<<endl;
	system("pause");
	system("cls");


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"Para comprobar los resultados"<<endl;
	cout<<"Realice nuevamente un salto sin impulso, e ingrese la distancia recorrida(centimetros)"<<endl;
	cin>>distan;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=distan-distancia;
	ganancia=(resta/distancia)*100;
	cout<<"Despues de este seguimiento en la fuerza explosiva, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	
}

void usuario::reflejos()
{
	int días;
	
	system("cls");
	confirmar();
	cout<<"Para mejorar sus reflejos, no necesitamos ningun dato suyo"<<endl;
	cout<<"excepto si es hombre o mujer"<<endl;
	cout<<"Acá haremos seguimiento a a su rapidez para responder a acciones"<<endl;
	cout<<"inesperadas y veloces"<<endl;
	
	
		cout<<"\n\nApreciado "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de 12 semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Jugar Videojuegos: "<<endl;
	cout<<"Consiste en jugar a algun juego virtual, donde tenga que tomar decisiones rapidas"<<endl;
	cout<<"Preferiblemente juegos de disparos en primera persona"<<endl;
	cout<<"Debe hacer esto durante 4 semanas \n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Lanzamiento de pelota(ponchado): "<<endl;
	cout<<"Con su familia o amigos, juegue al ponchado"<<endl;
	cout<<"Trate de no ser tocado por la pelota"<<endl;
	cout<<"Debe hacer esto durante 3 semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");


	cout<<"3.Pelota contra la pared: "<<endl;
	cout<<"Consiga una pelota elastica y tirela contra una pared"<<endl;
	cout<<"con mucha fuerza, y trate de no dejarla caer"<<endl;
    cout<<"Preferiblemente pida ayuda para que le lancen la pelota"<<endl;
	cout<<"A un lugar donde usted no sabe"<<endl;
	cout<<"Debe hacer esta rutina durante 5 semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"\tFelicidades ha terminado su seguimiento de 12 semanas"<<endl;
	cout<<"Acaba de ejercitar y mejorar sus reflejos"<<endl; 
	system("pause");
	system("cls");
	
	

	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	
	
	

}

void usuario::masaMuscular()
{
	
	cout<<"Este es el seguimiento para el mejoramiento de la masa muscular"<<endl;
	cout<<"Si su indice de masa es bajo, se le dirigira al aumento"<<endl;
	cout<<"y si es alto, se le dirigira a corregir su masa"<<endl;
	
	
	int dias;
	if(sexo=='M')
	{
	int bici;
	int bicf;
	int M[6][6];

	cout<<"\n\n\n"<<nombre<<endl;
	cout<<"\nPor favor mida el grosor de su biceps e ingreselo(centimetros)"<<endl;
	cin>>bici;
	system("cls");
	//Ejercicios para mejorar la masa corporal
	//Flexion de pierna 1.
	//flexion de brazo 2.
	//Pecho 3.
	//Barras 4.
	//Fondos 5.
	//final 6.
	
	M[1][1]=0 ;  M[1][2]=0 ;  M[1][3]=0 ;  M[1][4]= 0;  M[1][5]= 0;  M[1][6]=0 ;
	M[2][1]=0 ;  M[2][2]=0 ;  M[2][3]=0 ;  M[2][4]=0 ;  M[2][5]=0 ;  M[2][6]=0 ;
	M[3][1]=0;   M[3][2]=0 ;  M[3][3]=0 ;  M[3][4]=0 ;  M[3][5]= 0;  M[3][6]= 0;
	M[4][1]=0 ;  M[4][2]=0 ;  M[4][3]=0 ;  M[4][4]=0 ;  M[4][5]= 0;  M[4][6]=0 ;
	M[5][1]=0 ;  M[5][2]= 0;  M[5][3]=0 ;  M[5][4]=0 ;  M[5][5]= 0;  M[5][6]=0 ;
	M[6][1]=0 ;  M[6][2]=0 ;  M[6][3]=0 ;  M[6][4]= 0;  M[6][5]= 0;  M[6][6]= 0;
	
	switch(nivelmas)
	{
	case 1:
		{
		M[1][2]=4;
		M[2][3]=4;
		M[3][4]=4;
		M[4][5]=4;
		M[5][6]=4;
		dias=20;
		break;
		}

	case 2:
		{
		M[1][2]=3;
		M[2][3]=3;
		M[3][4]=3;
		M[4][5]=3;
		M[5][6]=3;
		dias=12;
		break;
		}

	case 3:
		{
		M[1][2]=3;
		M[2][3]=3;
		M[3][4]=3;
		M[4][5]=3;
		M[5][6]=3;
		dias=15;
		break;
		}

	case 4:
		{
		M[1][2]=4;
		M[2][3]=4;
		M[3][4]=4;
		M[4][5]=4;
		M[5][6]=4;
		dias=20;
		break;
		}

	case 5:
		{
		M[1][2]=5;
		M[2][3]=5;
		M[3][4]=5;
		M[4][5]=5;
		M[5][6]=5;
		dias=25;
		break;
		}


	}

	if(nivelmas<=2)
	{
		
	system("cls");
	confirmar();
	cout<<"\n\nApreciado caballero "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Flexion de pierna: "<<endl;
	cout<<"Consiste en flexionar las piernas, lentamente, pero con un peso sobre sus hombros"<<endl;
		cout<<"Lo adecuado es que sea bastante peso, haga 3 rondas de a 20 flexiones"<<endl;
		cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Flexiones de brazo: "<<endl;
	cout<<"Coloque sus brazos sobre el suelo, baje y suba lentamente, pero con un peso sobre su espalda"<<endl;
	cout<<"Lo adecuado es que sea bastante peso, haga 3 rondas de a 10 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Pecho: "<<endl;
	cout<<"Coloquese acostad, mirando hacia arriba"<<endl;
	cout<<"Coja un peso, y subalo y bajelo con ambos brazos a la vez lentamente"<<endl;
	cout<<"haga 5 rondas de a 10 flexiones"<<endl;
    cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Barras: "<<endl;
	cout<<"Consiste en subir y bajar el cuerpo, lentamente, sobra una varilla horizontal en lo alto"<<endl;
	cout<<"Baje totalmente, y suba hasta que la barra toque su pecho"<<endl;
	cout<<"haga 10 rondas de a 5 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"5.Fondos: "<<endl;
	cout<<"Consiste en subir y bajar sobre unas barras paralelas horizontales rapidamente"<<endl;
	cout<<"sin tocar el suelo"<<endl;
	cout<<"Haga 7 rondas de a 8 fondos, y descanse un minuto"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[5][6]<<" semanas\n\n\n\n"<<endl;
	system("pause");
	system("cls");


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor mida nuevamente su biceps"<<endl;
	cin>>bicf;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=bicf-bici;
	ganancia=(resta/bici)*100;
	cout<<"Despues de este seguimiento de masa muscular, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	}
	else
	{
		
	system("cls");
	confirmar();
		cout<<"\n\nApreciado caballero "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");
	

	cout<<"1.Flexion de pierna: "<<endl;
	cout<<"Consiste en flexionar las piernas, rapidamente"<<endl;
		cout<<"Haga 3 rondas de a 40 flexiones"<<endl;
		cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Flexiones de brazo: "<<endl;
	cout<<"Coloque sus brazos sobre el suelo, baje y suba rapidamente"<<endl;
	cout<<"Haga 4 rondas de a 15 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Pecho: "<<endl;
	cout<<"Coloquese acostad, mirando hacia arriba"<<endl;
	cout<<"Coja un peso, y subalo y bajelo con ambos brazos a la vez rapidamente"<<endl;
	cout<<"haga 5 rondas de a 20 flexiones"<<endl;
    cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Barras: "<<endl;
	cout<<"Consiste en subir y bajar el cuerpo, rápidamente, sobra una varilla horizontal en lo alto"<<endl;
	cout<<"Baje totalmente, y suba hasta que la barra toque su pecho"<<endl;
	cout<<"haga 10 rondas de a 11 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"5.Fondos: "<<endl;
	cout<<"Consiste en subir y bajar sobre unas barras paralelas horizontales rápidamente "<<endl;
	cout<<"sin tocar el suelo"<<endl;
	cout<<"Haga 7 rondas de a 15 fondos, y descanse un minuto"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[5][6]<<" semanas\n\n\n\n"<<endl;
	system("pause");
	system("cls");


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor mida nuevamente su biceps"<<endl;
	cin>>bicf;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=bicf-bici;
	ganancia=(resta/bici)*100;
	cout<<"Después de este seguimiento de masa muscular, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	}



	}

	
 else
	{
    cout<<nombre<<endl;
	int bici;
	int bicf;
	int M[5][5];

	cout<<"\n\n\n"<<nombre<<endl;
	cout<<"\nPor favor mida el grosor de su biceps e ingreselo(centimetros)"<<endl;
	cin>>bici;
	system("cls");
	//Ejercicios para mejorar la masa corporal
	//Sentadillas 1.
	//flexion de pierna 2.
	//Pesas 3.
	//Flexión brazo 4.
	//final 6.
	

	
   
	M[1][1]=0 ;  M[1][2]=0 ;  M[1][3]=0 ;  M[1][4]= 0;  M[1][5]= 0;  M[1][6]=0 ;
	M[2][1]=0 ;  M[2][2]=0 ;  M[2][3]=0 ;  M[2][4]=0 ;  M[2][5]=0 ;  M[2][6]=0 ;
	M[3][1]= 0;  M[3][2]=0 ;  M[3][3]=0 ;  M[3][4]=0 ;  M[3][5]= 0;  M[3][6]= 0;
	M[4][1]=0 ;  M[4][2]=0 ;  M[4][3]=0 ;  M[4][4]=0 ;  M[4][5]= 0;  M[4][6]=0 ;
	
	switch(nivelmas)
	{
	case 1:
		M[1][2]=4;
		M[2][3]=4;
		M[3][4]=4;
		M[4][5]=4;
		
		dias=16;
		break;

	case 2:
		M[1][2]=3;
		M[2][3]=3;
		M[3][4]=3;
		M[4][5]=3;
		
		dias=12;
		break;

	case 3:
		M[1][2]=3;
		M[2][3]=3;
		M[3][4]=3;
		M[4][5]=3;
		
		dias=12;
		break;

	case 4:
		M[1][2]=4;
		M[2][3]=4;
		M[3][4]=4;
		M[4][5]=4;
		
		dias=16;
		break;

	case 5:
		M[1][2]=5;
		M[2][3]=5;
		M[3][4]=5;
		M[4][5]=5;
		
		dias=20;
		break;
	
	}
	

	
	system("cls");
	confirmar();
	cout<<"\n\nApreciada dama "<<nombre<< " el sistema ha estudiado sus necesidades, y su rutina a seguir es la siguiente : "<<endl;
	cout<<"Su seguimiento sera de "<<dias<<" semanas, en cada semana, hara esta rutina los dias lunes, miercoles y viernes"<<endl;
	cout<<"Para que este seguimiento de los resultados esperados, practique estos ejercicios media hora diariamente"<<endl;
	cout<<"Recuerde, que cada vez que pase al otro ejercicio, debe hacer todos los practicados\n\n\n"<<endl;
	system("pause");
	system("cls");

	if(nivelmas>=2)
	{
	cout<<"1.Sentadilla: "<<endl;
	cout<<"Consiste en flexionar las piernas, rapidamente"<<endl;
		cout<<"Haga 3 rondas de a 10 flexiones"<<endl;
		cout<<"Hagala, y descanse 5 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Piernas: "<<endl;
	cout<<"Acuéstese sobre el suelo, mirando hacia abajo"<<endl;
	cout<<"suba una pierna hacia arriba, y luego la otra rapidamente"<<endl;
	cout<<"Haga 4 rondas de a 10 flexiones"<<endl;
	cout<<"Hagala, y descanse 5 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Pesas: "<<endl;
	cout<<"Coja un peso en su mano, póngalo sobre una superficie"<<endl;
	cout<<"Coja un peso, y subalo y bajelo con un ángulo de 45 90 grados en el brazo, rapidamente"<<endl;
	cout<<"haga 5 rondas de a 10 flexiones"<<endl;
    cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Flexión de brazo: "<<endl;
	cout<<"Consiste en subir y bajar el cuerpo, rapidamente, sostenida con ambos brazos"<<endl;
	cout<<"sobre una superficie a la altura de su cintura,baje totalmente, "<<endl;
	cout<<"y suba hasta que la superficie toque su pecho, haga 8 rondas de a 11 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor mida nuevamente su biceps"<<endl;
	cin>>bicf;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=bicf-bici;
	ganancia=(resta/bici)*100;
	cout<<"Después de este seguimiento de masa muscular, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	}
	else
	{
		cout<<"1.Sentadilla: "<<endl;
	cout<<"Consiste en flexionar las piernas, lentamente, y con un peso sobre"<<endl;
		cout<<"sus hombros, haga 3 rondas de a 6 flexiones"<<endl;
		cout<<"Hagala, y descanse 5 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[1][2]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

    cout<<"2.Piernas: "<<endl;
	cout<<"Acuéstese sobre el suelo, mirando hacia abajo, amarre un peso a sus pies"<<endl;
	cout<<"suba una pierna hacia arriba, y luego la otra lentamente"<<endl;
	cout<<"Haga 5 rondas de a 8 flexiones"<<endl;
	cout<<"Hagala, y descanse 5 minutos, y continue"<<endl;
	cout<<"Debe hacer esto durante "<<M[2][3]<<" semanas\n\n\n"<<endl;
	system("pause");	
	system("cls");

	cout<<"3.Pesas: "<<endl;
	cout<<"Coja un peso en su mano, póngalo sobre una superficie"<<endl;
	cout<<"Coja un peso, y subalo y bajelo con un ángulo de 45 90 grados en el brazo, lentamente"<<endl;
	cout<<"haga 6 rondas de a 8 flexiones"<<endl;
    cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[3][4]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	cout<<"4.Flexión de brazo: "<<endl;
	cout<<"Consiste en subir y bajar el cuerpo, lentamente, sostenida con ambos brazos"<<endl;
	cout<<"sobre una superficie a la altura de su cintura,baje totalmente, "<<endl;
	cout<<"y suba hasta que la superficie toque su pecho, haga 5 rondas de a 11 flexiones"<<endl;
	cout<<"Hagala, y descanse 2 minutos, y continue"<<endl;
	cout<<"Debe hacer esta rutina durante "<<M[4][5]<<" semanas\n\n\n"<<endl;
	system("pause");
	system("cls");

	


	cout<<"\tFelicidades ha terminado su seguimiento de "<<dias<<" semanas"<<endl;
	cout<<"\nPor favor mida nuevamente su biceps"<<endl;
	cin>>bicf;
	cout<<"Estamos analizando su resultado, y hallando su porcentaje de mejoramiento"<<endl;
	float resta;
	resta=bicf-bici;
	ganancia=(resta/bici)*100;
	cout<<"Después de este seguimiento de masa muscular, hemos notado su mejoramiento"<<endl;
	cout<<"Su mejoramiento es de "<<ganancia<<"%, !FELICITACIONES!"<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Muchas gracias por utilizar nuestro software"<<endl;
	cout<<"Hasta luego"<<endl;
	system("pause");
	}

	}
	}
	
void usuario::password()
{
	char resp;
	cout<<"\nPor favor, ingrese un numero de usuario"<<endl;
	cout<<"Escriba su numero de usuario de 6 caracteres"<<endl;
	cout<<"Usuario : ";
	cin>>usuarioP;
	
   cout<<"\n\nSu numero de usuario es : ";
   cout<<usuarioP;

	cout<<"\nEs correcto?"<<endl;
	cin>>resp;
	if(resp=='s')
	{
	contra=usuarioP/47;
	}
	else
	{
    password();
    system("cls");
	}
			

	cout<<"Su contrasena es: "<<endl;
	cout<<contra<<"\n"<<endl;
	system("pause");
	system("cls");
}

void usuario::confirmar()
{
	int second;
	cout<<"Por favor digite su contrasena para ver sus resultados"<<endl;
		cin>>second;
	if(second==contra)
	{
		cout<<"Puede continuar y ver sus resultados"<<endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout<<"Usted no ha iniciado sesion, por favor compre el algoritmo"<<endl;
		system("pause");
		system("cls");
		password();
	}

}

int main(int b )
{
	system("color 17");
	int resp;
	bool mientras;
	bool x;
	mientras=true;
	usuario usuario;
	cout<<"\tBienvenido al software de desarrollo y seguimiento fisico\n"<<endl;
	system("pause");
	system("cls");
	usuario.password();
	


	
	
	do
	{
	cout<<"1.Ingrese su nombre"<<endl;
	cout<<"2.Ingrese su edad"<<endl;
	cout<<"3.Ingrese su peso en Kilogramos"<<endl;
	cout<<"4.Ingrese su altura"<<endl;
	cout<<"5.Ingrese su numero de pulsaciones en un minuto"<<endl;
	cout<<"6.Elija su sexo(M/F)"<<endl;
	cout<<"7.Continuar (cuando llene todos sus datos)"<<endl;
	cout<<"8.Salir"<<endl;
	cin>>resp;

	switch(resp)
	{
	case 1:
		usuario.IngresarNombre();
		break;
	case 2:
		usuario.IngresarEdad();
		break;
	case 3:
		usuario.IngresarPeso();
		break;
	case 4:
		usuario.IngresarAltura();
		break;
	case 5:
		usuario.NumeroPulsaciones();
		break;
	case 6:
		usuario.Sexo();
		break;
	case 7:
		mientras=false;
		x=true;
		break;
	case 8:
		mientras=false;
		x=false;
		break;
	}
	system("cls");
	
	}while(mientras==true);

	if(x==true)
	{
	usuario.imc();
	system("cls");

	cout<<"En que aspecto fisico desea optimizar sus capacidades?"<<endl;
	cout<<"1.Velocidad"<<endl;
	cout<<"2.Resistencia cardiaca"<<endl;
	cout<<"3.Fuerza explosiva"<<endl;
	cout<<"4.Reflejos"<<endl;
	cout<<"5.Masa muscular"<<endl;
	int ans;
	cin>>ans;
	system("cls");
	switch(ans)
	{
	case 1:
		usuario.velocidad();
		break;
	case 2:
		usuario.resistencia();
		break;
	case 3:
		usuario.explosividad();
		break;
	case 4:
		usuario.reflejos();
		break;
	case 5:
		usuario.masaMuscular();
		break;
	}
	}
	else
	cout<<"adios"<<endl;



	string afir;
	cout<<"Desea volver a utilizar nuestro software(true/false)?"<<endl;
	cin>>afir;

	if(afir=="true")
	{	
	   system("cls");
		main(0);
	}
	else
	cout<<"Adios, esperamos su regreso"<<endl;

	
	b=0;
	return b;
   
	system("pause");
	

}
