double puis(double nombre, int puiss){

	int i;
	double resul_puis=1.0;

	for (i=1;i<=puiss;i++){
		resul_puis=resul_puis*nombre;
	}
	return resul_puis;
}

double fact(int nombre){

	int i;
	double produit=1.0;

	for (i=1;i<=nombre;i++){
		produit=produit * i;
	}

	return produit;
}

double cos(double x){
//	x=1-(x*x)/2+(x*x*x*x)/(4*3*2)-(x*x*x*x*x*x)/(6*5*4*3*2)+(x*x*x*x*x*x*x*x)/(8*7*6*5*4*3*2)-(x*x*x*x*x*x*x*x*x*x)/(10*9*8*7*6*5*4*3*2);
	
	x=1-(puis(x,2)/fact(2))+(puis(x,4)/fact(4))-(puis(x,6)/fact(6))+(puis(x,8)/fact(8))-(puis(x,10)/fact(10));

	return x;
}