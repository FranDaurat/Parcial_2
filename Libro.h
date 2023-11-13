#include <stdio.h>
#include <stdlib.h>
#include "autor.h"
#ifndef LIBRO_H
#define LIBRO_H
typedef struct {
    char titulo[100];
    Autor autor1;
    Autor autor2;
    Autor autor3;
    int cantidadPaginas;
    char isbn[15];
    int anoEdicion;
    char editorial[50];
    char genero[20];
}Libro;


char* getTitulo(Libro *lib){
    return lib->titulo;
}

Autor getAutor1(Libro *lib){
    return lib->autor1;
}
Autor getAutor2(Libro *lib){
    return lib->autor2;
}
Autor getAutor3(Libro *lib){
    return lib->autor3;
}

char* getIsbn(Libro *lib){
    return lib->isbn;
}

int getCantPag(Libro *lib){
    return lib->cantidadPaginas;
}

int getAnoEdicion(Libro *lib){
    return lib->anoEdicion;
}

char* getEditorial(Libro *lib){
    return lib->editorial;
}

char* getGenero(Libro *lib){
    return lib->genero;
}

void modificarTitulo(Libro *lib, char *nuevoTitulo) {
    strcpy(lib->titulo, nuevoTitulo);
}

void modificarAutor1nombre(Libro *lib, char *nuevoAutor1) {
    strncpy(lib->autor1.nombre, nuevoAutor1, sizeof(lib->autor1.nombre) - 1);
    lib->autor1.nombre[sizeof(lib->autor1.nombre) - 1] = '\0';
}


void modificarAutor2nombre(Libro *lib, char *nuevoAutor2){
    strncpy(lib->autor2.nombre, nuevoAutor2, sizeof(lib->autor2.nombre) - 1);
    lib->autor2.nombre[sizeof(lib->autor2.nombre) - 1] = '\0';
}

void modificarAutor3nombre(Libro *lib, char *nuevoAutor3){
   strncpy(lib->autor3.nombre, nuevoAutor3, sizeof(lib->autor3.nombre) - 1);
   lib->autor3.nombre[sizeof(lib->autor3.nombre) - 1] = '\0';
}

void modificarAutor1apellido(Libro *lib, char *nuevoAutor1){
   strncpy(lib->autor1.apellido, nuevoAutor1, sizeof(lib->autor1.apellido) - 1);
   lib->autor1.apellido[sizeof(lib->autor1.apellido) - 1] = '\0';
}

void modificarAutor2apellido(Libro *lib, char *nuevoAutor2){
   strncpy(lib->autor2.apellido, nuevoAutor2, sizeof(lib->autor2.apellido) - 1);
   lib->autor2.apellido[sizeof(lib->autor2.apellido) - 1] = '\0';
}

void modificarAutor3apellido(Libro *lib, char *nuevoAutor3){
   strncpy(lib->autor3.apellido, nuevoAutor3, sizeof(lib->autor3.apellido) - 1);
   lib->autor3.apellido[sizeof(lib->autor3.apellido) - 1] = '\0';
}

void modificarEditorial(Libro *lib, char *nuevaEditorial){
    strncpy(lib->editorial, nuevaEditorial, sizeof(lib->editorial) - 1);
    lib->editorial[sizeof(lib->editorial) - 1] = '\0';
}

void modificarAnoEdicion (Libro *lib, int ano){
    lib->anoEdicion = ano;
}

void modificarCantPags (Libro *lib, int pags){
    lib->cantidadPaginas = pags;
}

void modificarGenero(Libro *lib, char *nuevoGenero){
    strncpy(lib->genero, nuevoGenero, sizeof(lib->genero) - 1);
    lib->genero[sizeof(lib->genero) - 1] = '\0';
}

// void modificarAnoEdicion(Libro *lib, int ano) {
//     lib->anoEdicion = ano;
//     snprintf(lib->anoEdicion, sizeof(lib->anoEdicion), "%d", ano);
//     lib->anoEdicion[sizeof(lib->anoEdicion) - 1] = '\0';
// }

// void modificarCantPaginas(Libro *lib, int cant){
//     strncpy(lib->genero, nuevoGenero, sizeof(lib->genero) - 1);
//     lib->genero[sizeof(lib->genero) - 1] = '\0';
// }
#endif
