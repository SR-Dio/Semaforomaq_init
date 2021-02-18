/*
 * File:   semaforo.c
 * Author: 19179166
 *
 * Created on 17 de Fevereiro de 2021, 15:43
 */


#include <xc.h>
#include "config.h"
#define VERDE       PORTDbits.RD7 
#define AMARELO     PORTDbits.RD6    
#define VERMELHO    PORTDbits.RD5 
#define VERDEPED    PORTDbits.RD4
#define VERMELHOPED PORTDbits.RD2 
#define BOTAO       PORTDbits.RD1

void semaforo_init (void)
{
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD4 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD4 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
    
    
}

void verde (int x)
{
    VERDE = x;
}

void vermelho (int x)
{
    VERMELHO = x;
}

void amarelo (int x)
{
    AMARELO = x;
}

void verde_ped (int x)
{
    VERDEPED = x;
}

void vermelho_ped (int x)
{
    VERMELHOPED = x;
}

int botao (void)
{
    return(BOTAO);
}

