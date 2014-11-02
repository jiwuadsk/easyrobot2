/*
The interface for the 360-degree rotations motors. 

* Created 2 November 2014
* By Jeffrey Sun

*/

#ifndef ERXIMOTOR_H
#define ERXIMOTOR_H

#define IMOTOR_LIB_VER "1.0"

class ERxIMotor
{
public:
	
	virtual ~ERxIMotor(){}

public:
	/**
	@param {unsigned int} speed, the value range is [0, 255]. If the motor supports speed control, will indicate the actual speed. Otherwise, this value will be ignored. And the motor will be running forward in the constant speed.
	**/
	virtual void forward(unsigned int speed = 0){};
	virtual void backward(unsigned int speed = 0){};
	virtual void stop(){};
};
#endif // ERXIMOTOR_H
