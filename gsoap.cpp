#include "soapcalcProxy.h" // get proxy
#include "calc.nsmap" // get namespace bindings
int main()
{
	calcProxy s;
	double r;
	if (s.add(1.0, 2.0, r) == SOAP_OK){
		std::cout << r << std::endl;
	}
	else {
		s.soap_print_fault(stderr);
	}
	return 0;
}