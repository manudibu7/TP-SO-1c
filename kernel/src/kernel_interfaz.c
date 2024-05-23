#include "kernel_interfaz.h"

void atender_interfaz()
{
    bool control_key = 1;
    while (control_key)
    {
        int cod_op = recibir_operacion(socket_interfaz);
        switch (cod_op)
        {
        case MENSAJE:
            //
            break;
        case PAQUETE:
            //
            break;
        case -1:
            log_error(kernel_logger, "Se desconecto Interfaz");
            control_key = 0;
            break;
        default:
            log_warning(kernel_logger, "Operacion desconocida de Interfaz");
            break;
        }
    }
};