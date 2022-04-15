#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main()
{
	
float promedio=0,descuento=0,colegiatura=0,total=0;
string desc;
	
cout<<"Ingresa tu promedio"<<endl;
cin>>promedio;
	
cout<<"Ingresa la cuota de tu colegiatura"<<endl;
cin>>colegiatura;	
	
if(promedio>=9)
  {
    descuento=0.2;
    desc="20%";
    
  }
  else
  {
    if(promedio>=8 && promedio <9)
    {
      descuento=0.1;
      desc="10%";
    }
    else
    {
      if(promedio>=7 && promedio <8)
      {
        descuento=0.05;
        desc="5%";
      }
      else
      {
        descuento=0;
        desc="0%";
      }
    }
  }
	
		
total=colegiatura-colegiatura*descuento;

cout<<"............................."<<endl;
cout<<"|  Tu descuento es de: "<<desc<<"  |"<<endl;
cout<<"|  Total a pagar: "<<total<<"       |"<<endl;
cout<<":...........................:"<<endl;
		
system("pause");
return 0;
}
