#include "interfaz_memoria.h"

void atender_memoria()
{
    bool control_key = 1;
    while (control_key)
    {
        t_buffer *un_buffer;
        int cod_op = recibir_operacion(socket_memoria);
        switch (cod_op)
        {
        case MENSAJE:
            //
            break;
        case PAQUETE:
            //
            break;
        case RESULTADO_ESCRITURA:
            un_buffer = recibir_buffer(socket_memoria);
            confirmar_escritura(un_buffer);
            destruir_buffer(un_buffer);
            break;
        case RESULTADO_LECTURA:
            un_buffer = recibir_buffer(socket_memoria);
            imprimir_resultado_lectura(un_buffer);
            destruir_buffer(un_buffer);
            break;
        case -1:
            log_error(io_logger, "Se desconecto Memoria");
            control_key = 0;
            break;
        default:
            log_warning(io_logger, "Operacion desconocida de Memoria");
            break;
        }
    }
};