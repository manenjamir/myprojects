#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
    int user;
    double x,y;
    int z;
    using namespace std;

//function declartions
void add(void);
void sub(void);
void mul(void);
void div(void);
void evenodd(void);
void prime(void);
void quad(void);
void matrix(void);



int main()
{  
	
	 
while (1)
 {
 system("cls");


 
 cout<<"\n\t\t\t\t:::::CALCULATOR:::::";
 cout<<"\n\n\n";
 cout<<"\t\t   BASIC                           ADVANCE";
 cout<<"\n\t\t-----------                     ------------";
 cout<<"\n\t\taddition        -> 1           check even or odd  ->5";
 cout<<"\n\t\tsubtraction     -> 2           check prime number ->6"; 
 cout<<"\n\t\tmultiplication  -> 3           Quatratic roots    ->7";
 cout<<"\n\t\tdivision        -> 4           matrix determinant ->8";
 cout<<"\n\n\t\tEXIT            --> 9\t\t";
 cin>>user;
    switch(user)
    {
       case 1: add(); break;
       case 2: sub(); break;
       case 3: mul(); break;
       case 4: div(); break;
       case 5: evenodd(); break;
       case 6: prime(); break;
       case 7:quad(); break;
       case 8:matrix(); break;

       case 9: exit(9);


    }
    getch();
 }
return 0;
}





//funtions defintions

void add()
{   
    cout<<"\n enter two value:\n";
	cin>>x; cout<<"+\n"; cin.ignore(); cin>>y; cout<<"= "<<x+y;   
}

void sub()
{
    cout<<"\n enter two value:\n ";
	cin>>x; cout<<"-\n"; cin.ignore(); cin>>y; cout<<"= "<<x-y;
}

void mul()
{
     cout<<"\n enter two value:\n";
	 cin>>x; cout<<"*\n"; cin.ignore(); cin>>y; cout<<"= "<<x*y;
}

void div()
{
      cout<<"\n enter two value:\n";
	  cin>>x; cout<<"%\n"; cin.ignore(); cin>>y; cout<<"= "<<x/y;
}

void evenodd()
{
     cout<<"\n enter a number:";
	 cin>>z;

	 if(z%2==0)
     cout<<"\nEVEN NUMBER";
	 else
	 cout <<"\nODD NUMBER";
	
}

void prime()
{
    cout<<"\nenter a number :";
    cin>>z;
    int x=0;
    int i=1;

    while(i<=z)
      {
        if(z%i==0) 
        { x++;}
       
       i++;
      }
if (x==2)
   cout<<"\n "<<z<<" IS A PRIME NUMBER";
else 
    cout<<"\n "<<z<<" IS NOT A PRIME NUMBER";
}

void quad()
{
    int a,b,c,s;
float d;
float x1,x2;

cout<<"\n\n\n\t\tQUADRATIC EQUATION :  ax^2 +  bx + c = 0";
cout<<"\n\t\tenter the value :";
cout<<"\n\t\t a = ";
cin>>a;
cout<<"\n\t\t b = ";
cin>>b;
cout<<"\n\t\t c = ";
cin>>c;
 d=b*b-4*a*c;
 s=2*a;
x1= -b+sqrt(d);
x2= -b-sqrt(d);
  if(d>=0) 
  {
cout<<"ROOT 1: "<<x1/s;
cout<<"\n ROOT 2: "<<x2/s;
  }

  else
  {
    cout<<"\n\nSORRY THERE IS NO REAL ROOTS ONLY COMPLEX ROOT";
  }
}

void matrix()
{  int u;

   int a,b,c,d,e,f,g,h,i;
   cout<<"\n\t MATRIX        TYPE";
   cout<<"\n\t 2*2            2 ";
   cout<<"\n\t 3*3            3" ;
   cin>>u;
   switch(u)
   {
    case 2: 
       
    int s;
    cout<<"|a b|\n";
    cout<<"|c d|\n";
    cout<<"enter the values :";
    cout<<"\na =";
    cin>>a;
    cout<<"\nb =";
    cin>>b;
    cout<<"\nc =";
    cin>>c;
    cout<<"\nd =";
    cin>>d;
    
    s=a*d - c*b;

    cout<<"the determinant value ="<<s; break;

    case 3:
     

    int s1,x1,x2;
    cout<<"|a b c|\n";
    cout<<"|d e f|\n";
    cout<<"|g h i|\n";
    cout<<"enter the values :";
    cout<<"\na =";
    cin>>a;
    cout<<"\nb =";
    cin>>b;
    cout<<"\nc =";
    cin>>c;
    cout<<"\nd =";
    cin>>d;
    cout<<"\ne =";
    cin>>e;
    cout<<"\nf =";
    cin>>f;
    cout<<"\ng =";
    cin>>g;
    cout<<"\nh =";
    cin>>h;
    cout<<"\ni =";
    cin>>i;
    
x1 =c*d*h + a*e*i + b*f*g ;
x2 = d*f*h + c*e*g + b*d*i;
s1=x1-x2;
cout<<"the determinant value ="<<s1; break;

}

}