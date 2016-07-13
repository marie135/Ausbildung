//#include "MK64F12.h"
#include "Chip/MK64F12.hpp"

void Delay()
{
	int i;
	for (i = 0; i < 1000000; i++)
		asm("nop");
}

int main()
{
//	SIM_BASE_PTR->SCGC5 |= SIM_SCGC5_PORTB_MASK;
	apply(write(Kvasir::SimScgc5::PortbValC::v1), write(Kvasir::SimScgc5::PorteValC::v1));

//	PORTB_BASE_PTR->PCR[22] = PORT_PCR_MUX(1);
	apply(write(Kvasir::PortbPcr22::MuxValC::v001), write(Kvasir::PortbPcr21::MuxValC::v001), write(Kvasir::PortePcr26::MuxValC::v001)); //v001=gpio
//	GPIOB_PDDR = 1 << 22;
	constexpr auto ledb = makePinLocation(Kvasir::Io::portB, Kvasir::Io::pin21);
	constexpr auto ledg = makePinLocation(Kvasir::Io::portE, Kvasir::Io::pin26);
	constexpr auto ledr = makePinLocation(Kvasir::Io::portB, Kvasir::Io::pin22);
	apply(makeOutput(ledr, ledb, ledg));
	for(;;)
	{
//		GPIOB_PSOR = 1 << 22;
		apply(set(ledr, ledg), clear(ledb));
		Delay();
		apply(set(ledr, ledb), clear(ledg));
		Delay();
		apply(set(ledb, ledg), clear(ledr));
		Delay();
//		GPIOB_PCOR = 1 << 22;
		
	}

	return 0;
}