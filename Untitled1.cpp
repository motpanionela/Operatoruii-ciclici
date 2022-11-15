#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main()   {
	srand(time(0));
//Sase clculeze a+b-c de n ori
// 1. daca raspundul ese par si intra in intervalul 10 si 30 
// atunci se va eghexecut x+y/z de random ori.

int a,b,c ,n,R, i ,e,C;
 n = rand()%10+3;
 cout <<" n= "<< n << endl;
 i=0 ;
 R=a+b-c;
 

 while (i < n ) {
 	if (i==5) continue;

 	a=rand()%10;
 	 	b=rand()%10;
 	c=rand()%10;
cout <<" a= " << a << " b= "<< b<<" c="<< c <<" a+b-c"<< a+b-c << endl;
i++;
 	if(R%2==0 ) n++;
 	else n--;
 	i++;
 }
 
 for ( int x,y,z,  e=0;   e < 7 ; ) {
  z = rand()%13;
 x = rand()%13;
 y = rand()%13;
 C=x+y/z;
 	if( R%2==0 && R>10 && R < 30 )  {
		C=rand()%100 + 1;
	}
 	cout <<" x = " << x <<" y = " << y << " z = " << z <<" x + y / z = " << C << endl;
 	e++;
 }

	
	
	return 0;
}
