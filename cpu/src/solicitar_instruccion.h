#ifndef SOLICITAR_INSTRUCCION_H_
#define SOLICITAR_INSTRUCCION_H_

#include "gestor_cpu.h"

void solicitar_instruccion(u_int32_t direccion_instruccion);
t_instruccion formular_instruccion(char *string);
cod_instruccion obtener_codigo_instruccion(char *operation);
t_instruccion atender_instrucciones(t_buffer *buffer);

#endif