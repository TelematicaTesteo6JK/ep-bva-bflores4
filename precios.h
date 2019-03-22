int Horas(float va){
	int hr=(int) va;
	if(va>hr){hr++;}	// Si hay Fraccion de hr agrgega 1 hr mas 
	if(hr>=1 && hr<=5){	
	return (hr*10);	// 1-5	
	}else if(hr>=6 && hr<=10){
    return (hr*9); //6-10
	}else if(hr>10){
	return (hr*7);	//>10
	}else{
	return 0; //Fuera de los limites (Error)
}
	}
