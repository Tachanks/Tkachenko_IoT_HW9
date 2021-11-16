/*
* file name: analogIn.h
* Created by Oleksandr Tkachenko on November 11, 2021.
*
* This class wraps the functionality of analog input pins.
*/
#ifndef ANALOGIN_H_
#define ANALOGIN_H_
using std::string;
class AnalogIn
{
	private:
		unsigned int number;
	public:
		AnalogIn();
		AnalogIn(unsigned int n);
		virtual unsigned int getNumber() {return number; } // inline function implementation.
		virtual void setNumber(unsigned int n);
		virtual int readADCsample();
		virtual ~AnalogIn();
};
#endif /* ANALOGIN_H_ */
