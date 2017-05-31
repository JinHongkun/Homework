#include<math.h> 
float calP (float T){
	float A,B,C,P,x;
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
	x=T/Tx+n9/(T/Tx-n10);
	A=pow(x,2)+n1*x+n2;
	B=n3*pow(x,2)+n4*x+n5;
	C=n6*pow(x,2)+n7*x+n8;
	P=Px*pow(2*C/(-B+pow(pow(B,2)-4*A*C,0.5)),4);
	
	return P;
	}
