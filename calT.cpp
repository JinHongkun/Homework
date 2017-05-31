#include<math.h> 
float calT(float P){
	float D,E,F,G,T,b;
	float n1=0.11670521452767e4;
	float n2=-0.72421316703206e6;
	float n3=-0.17073846940092e2;
	float n4=0.12020824702470e5;
	float n5=-0.32325550322333e7; 
	float n6=0.14915108613530e2;
	float n7=-0.48232657361591e4;
	float n8=0.40511340542057e6;
	float n9=-0.23855557567849 ;
	float n10=0.65017534844798e3;
	float Tx=1;
	float Px=1;
	b=pow(P/Px,0.25);
	E=pow(b,2)+n3*b+n6;
	F=n1*pow(b,2)+n4*b+n7;
	G=n2*pow(b,2)+n5*b+n8;
	D=2*G/(-F-pow(pow(F,2)-4*E*G,0.5));
	T=Tx*(n10+D-pow(pow(n10+D,2)-4*(n9+n10*D),0.5))/2;
	return T;
} 
