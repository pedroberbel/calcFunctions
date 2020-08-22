#include <stdlib.h>
#include <math.h>

int f1(int x, int k) { // k
	int y = 0;

	y = k;

	return y;
}

int f2(int x, int k) {  // x^k
	int y = 0;

	y = pow(x, k);
	 
	return y;
}

int f3(int x, int k) { //k^x
	int y = 0;

	y = pow(k, x);

	return y;
}

int f4(int x) {   //e^x
	int y = 0;

	y = exp(x);

	return y;
}

//int f5(int x, int k) { //logk(x)
//}

int f6(int x) { //ln(x)
	int y = 0;

	y = log(x);

	return y;
}

float f7(float x){ //1/x
	//x diferente de zero
	int y = 0;

	if (x != 0) {
		return 0;
	}
	else {
		y = 1 / x;
		return y;
	}

}

int f8(float x){//sen(x)
	float y = 0;

	y = sin(x);

	return y;
}

 int f9(float x){  //cos(x)
	 float y = 0;

	 y = cos(x);

	 return y;
 }

 int f10(float x) {  //tg(x)
	 float y = 0;

	 y = tan(x);

	 return y;
 }






