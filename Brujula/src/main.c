#include <stdio.h>
#include "MyHeader.h"	// mi cabecera
#include "sapi.h"        // <= Biblioteca sAPI


CONSOLE_PRINT_ENABLE

int main( void )
{
	 /* Inicializar la placa */
	   boardConfig();

	   /* Inicializar UART_USB a 115200 baudios */
	   uartConfig( UART_USB, 115200 );

    float Ang = 45.0f, uartBuff=0;
    uint16_t a;
    while(1) {
    uartBuff=CalcCoseno(Ang);
    uartBuff=uartBuff*10;
    a=uartBuff;
    uartWriteString( UART_USB,"El coseno de 45 grados es: ");
    uartWriteString( UART_USB, a );
    uartWriteByte( UART_USB,"\r\r");

    consolePrintlnFloat(3.14);
    }

return 0 ;
}
