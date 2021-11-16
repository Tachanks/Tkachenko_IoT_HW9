/* File name: read_resistance.cpp
 Created by Oleksandr Tkachenko on November 16, 2021.
 An application to exercise the AnalogIn class.
*/
#include <iostream>
#include "analogIn.h"
#include <iomanip>
using namespace std;

int main(){
	AnalogIn AIN(0);
	float ADC_Val = AIN.readADCsample();
	float v_out = (1.80/4096) * ADC_Val;
	float resistance = (v_out*10000)/(1.8-v_out);
	cout << "Using AIN" << AIN.getNumber() << " to read analog value." << std::endl;
	cout << "ADC value is: " << ADC_Val << endl;
	cout << "Resistance value is: " << resistance << endl;
	cout << endl;
	cout << endl;
}//main
