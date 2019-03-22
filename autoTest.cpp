#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <precios.h>
using std::ofstream;
using namespace std;

string PassFail( float v1 , float v2){
	if (v1==v2)
		return "P";
	else
		return "F";
}

int main(){
	std::ofstream test ("testResults.txt");
	
	test << "Test Data = TD \n";
	test << "Expected Result = ER \n";
	test << "Actual Result = AR \n";
	test << "Pass / Fail = P/F \n\n";
	
	float EP[]={-4,3,8.5,12};//4
	float EPT[]={-0,30,81,84};//4
	float BVA[]={0,0.1,5,5.1,10,10.1};//6
	float BVAT[]={0,10,50,54,90,77};//6
	
    test << "EQUIVALENCE PARTITIONING \n";
    test << " TD | ER | AR | P/F";
    test << "\n---------------------";
    
    for(int i = 0; i<4; i++){
    	test <<"\n"<< EP[i] << " | "<< EPT[i] << " | "<< Horas(EP[i]) << " | " << PassFail(EPT[i],Horas(EP[i]));
	}
    
    
    test << "\n\nBOUNDARY VALUE ANALYSIS\n";
    test << " TD | ER | AR | P/F";
    test << "\n---------------------";
    
    for(int j = 0; j<6; j++){
    	test <<"\n"<< BVA[j] << " | "<< BVAT[j] << " | "<< Horas(BVA[j]) << " | " << PassFail(BVAT[j],Horas(BVA[j]));
	}
	
    test.close();
    return 0;
}
