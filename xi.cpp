#include <iostream>
using namespace std;
class para
{
	public:
	double liraDegeri;
    int elli, yirmiBes,on,bes,bir;
	
	float liraAta();
	float donustur();
	float yaz();
	
};

float para::liraAta()
{
cin>>liraDegeri;
return liraDegeri;
}

float para::donustur()
{
	if(liraDegeri>=0.50)
	{
		elli=liraDegeri/0.50;
		liraDegeri=liraDegeri-elli*0.50;
	}
	
	if(liraDegeri>=0.25)
	{
		yirmiBes=liraDegeri/0.25;	
		liraDegeri=liraDegeri-yirmiBes*0.25;
	}
	
	if(liraDegeri>=0.10)
	{
		on=liraDegeri/0.10;	
		liraDegeri=liraDegeri-on*0.10;
	}
	
	if(liraDegeri>=0.05)
	{
		bes=liraDegeri/0.05;	
		liraDegeri=liraDegeri-bes*0.05;
	}

	if(liraDegeri>=0.01)
	{
		bir=liraDegeri/0.01;	
		liraDegeri=liraDegeri-bir*0.01;
	}
	
}

float para::yaz()
{
cout<<" "<<elli<<"  50 kurus"<<endl;
cout<<" "<<yirmiBes<<"  25 kurus"<<endl;
cout<<" "<<on<<"  10 kurus"<<endl;
cout<<" "<<bes<<"  5 kurus"<<endl;	
cout<<" "<<bir<<"  1 kurus"<<endl;
}

int main()
{
	para x;
	cout<<"Para miktarini lira olarak giriniz: ";
	cout<<x.liraAta()<<" lira:"<<endl;
    x .donustur();
	x.yaz();

return 0;
}

