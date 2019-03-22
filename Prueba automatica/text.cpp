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
	
    test << "EQUIVALENCE PARTITIONING \n";
    test << " TD | ER | AR | P/F";
    test << "\n---------------------";
    test << "\n -4 |  0 |  " << Horas(-4) << " |  " << PassFail(0,Horas(-4));
    test << "\n  3 | 30 | " << Horas(3) << " |  " << PassFail(30,Horas(3));
    test << "\n8.5 | 81 | " << Horas(8.5) << " |  " << PassFail(81,Horas(8.5));
    test << "\n 12 | 84 | " << Horas(12) << " |  " << PassFail(84,Horas(12));

    
    test << "\n\nBOUNDARY VALUE ANALYSIS\n";
    test << " TD | ER | AR | P/F";
    test << "\n---------------------";
    test << "\n  0 |  0 |  " << Horas(0) << " |  " << PassFail(0,Horas(0));
    test << "\n0.1 | 10 | " << Horas(0.1) << " |  " << PassFail(10,Horas(0.1));
    test << "\n  5 | 50 | " << Horas(5) << " |  " << PassFail(50,Horas(5));
    test << "\n5.1 | 54 | " << Horas(5.1) << " |  " << PassFail(54,Horas(5.1));
    test << "\n 10 | 90 | " << Horas(10) << " |  " << PassFail(90,Horas(10));
    test << "\n10.1| 77 | " << Horas(10.1) << " |  " << PassFail(77,Horas(10.1));
    test.close();
    return 0;
}
