#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libro.h"

#ifndef LISTA_SIMPLE
#define LISTA_SIMPLE

typedef struct nodo {
    Libro li;
    struct nodo *prox;
} Nodo;

typedef struct {
    Nodo *com;
    Nodo *actual;
    int len;
} lista_cab;

void crearLista(lista_cab *l){
    Nodo * cen = (Nodo *) malloc(sizeof(Nodo));
    cen->prox = NULL;
    Nodo * cab = (Nodo *) malloc(sizeof(Nodo));
    cab->prox = cen;
    l->com = cab;
    l->actual = l->com;
    l->len = 0;
}

int esListaVacia(lista_cab *l){
    return l->len == 0;
}

Libro verActual(lista_cab *l){
    return l->actual->li;
}

void insertar(lista_cab *l, Libro lib){
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->li = lib;  
    nuevoNodo->prox = NULL;  
    
    if (l->com == NULL){  
        l->com = nuevoNodo;
    }
    else{
        nuevoNodo->prox = l->actual->prox;  
       l->actual->prox = nuevoNodo;
    }  
    l->actual = nuevoNodo;
    l->len++;
}

void insertar_Despues(lista_cab *l, Libro lib){
    Nodo *aux = (Nodo *) malloc(sizeof(Nodo));
    aux->li = lib;
    aux->prox = l->actual->prox;
    l->actual->prox = aux;
    l->actual = aux;
    if (l->actual->prox == NULL) {
        l->actual = aux;
    }
    l->len++;

}

void insertar_Antes(lista_cab *l, Libro lib){
    Libro liAux = l->actual->li;
    l->actual->li = lib;
    insertar_Despues(l,liAux);
}

void eliminar(lista_cab *l, Libro *lib) {
    Nodo *anterior = l->com;
    Nodo *actual = l->com->prox;
    int i=0;
    while (i <= (l->len-1) ) {
        if (strcmp(actual->li.isbn, lib->isbn) == 0) {
            anterior->prox = actual->prox;
            free(actual);
            l->len--;
            return;
        }
        anterior = actual;
        actual = actual->prox;
        i++;
    }
}


#endif