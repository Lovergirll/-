#include <iostream>
using namespace std;
int main()
{
	int a , b , c , mohit = 0 , masahat = 0 ;
	float x=0.5; 
	cin>>a>>b>>c;
	if ( ( a + b ) > a && ( b + c ) > a && ( c + a ) > b )
	{
		mohit = (( a + b + c ) * (x)) ;
		masahat = ( ( (mohit) * ( mohit - a ) * ( mohit - b ) * ( mohit - c ) )^ (1/2));
		cout <<  mohit << endl ;
		 cout << masahat << endl ;
	}
	return 0 ;
}
