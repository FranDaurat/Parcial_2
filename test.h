#include <stdio.h>
#include "lista_simple.h"
#include "autor.h"
#include "Libro.h"
#include "biblioteca.h"
#ifndef TEST
#define TEST

void test(){
    // lista_cab *li;
    // crearLista(li);

    // Libro libro1 = {"Libro 1", {"Juan", "Chavez"}, {"Asd", "dsa"}, {"fgh", "hgf"}, 200, "ISBN1", 2020, "Editorial1", "Genero1"};
    // insertar(li, libro1);

    // Libro libro2 = {"Carlos 2", {"Juan", "Chavez"}, {"zxc", "cxz"}, {"vbn", "mnb"}, 250, "ISBN2", 2018, "Editorial2", "Genero1"};
    // insertar_Despues(li, libro2);

    // Libro libro3 = {"Libro 3", {"Ricardo", "Fort"}, {"ghj", "jhg"}, {"ghj", "ghj"}, 300, "ISBN3", 2020, "Editorial3", "Genero1"};
    // insertar_Despues(li, libro3);

    // printf("Lista de autores unicos:\n");
    // listarAutoresUnicos(li);

    // printf("\nLista de libros existentes:\n");
    // listarLibrosExistentes(li);

    // printf("\nLista de libros del genero 'Genero1':\n");
    // listarLibrosGenero(li, "Genero1");

    // printf("\nLista de libros del autor 'Autor2':\n");
    // Autor autor;
    // autor.nombre = "Juan";
    // autor.apellido = "Perez";
    // listarLibrosAutor(li, autor);

    // printf("\nLista de los libros de la editorial:\n");
    // listarLibrosEditorial(li, "Editorial1");

    // printf("\nLista de libros de la editorial 'Editorial1' entre los años 2019 y 2021:\n");
    // listarLibrosEditorialAnoEdicion(li, "Editorial1", 2019, 2021);

    // printf("\nLista de autores de la editorial 'Editorial1':\n");
    // listarAutoresEditorial(li, "Editorial1");

    // printf("\nLista de libros editados en el ano 2020:\n");
    // listarLibrosAnoedicion(li, 2020);

    // printf("\nLos libros que comienzan con la inicial del autor son:\n");
    // listarLibrosPorInicialApellidoAutor(li, 'J');

    // printf("\nLista de libros cuyos títulos contienen la palabra 'Libro':\n");
    // listarTitulosSimilares(li, "Car");

    // // // Liberar memoria
    // // liberarLista(li);

   
    // insertar(li, libro1);
    // printf("--------- TESTEANDO METODOS GETTERS ---------\n");
    // printf("ISBN: %s\n", getIsbn(&libro1));
    // printf("Cantidad de Paginas: %d\n", getCantPag(&libro1));
    // printf("Ano de Edicion: %d\n", getAnoEdicion(&libro1));
    // printf("Editorial: %s\n", getEditorial(&libro1));
    // printf("Genero: %s\n", getGenero(&libro1));

    // // Modificar algunos campos del libro
    // modificarTitulo(&libro1, "Nuevo Titulo");
    // modificarAutor1nombre(&libro1, "Nuevo Autor1 Nombre");
    // modificarAutor2apellido(&libro1, "Nuevo Autor2 Apellido");
    // modificarEditorial(&libro1, "Nueva Editorial");

    // printf("--------- TESTEANDO METODOS SETTERS ---------\n");
    // // Casos de prueba después de la modificación
    // printf("\nDespues de la modificacion:\n");
    // printf("Titulo modificado: %s\n", libro1.titulo);
    // printf("Autor1 Nombre modificado: %s\n", libro1.autor1.nombre);
    // printf("Autor2 Apellido modificado: %s\n", libro1.autor2.apellido);
    // printf("Editorial modificada: %s\n", libro1.editorial);
    //     Libro libro2 = {"Carlos 2", {"Juan", "Chavez"}, {"zxc", "cxz"}, {"vbn", "mnb"}, 250, "ISBN2", 2018, "Editorial2", "Genero1"};
    //     insertar_Despues(li, libro2);

    //     Libro libro3 = {"Libro 3", {"Ricardo", "Fort"}, {"ghj", "jhg"}, {"ghj", "ghj"}, 300, "ISBN3", 2020, "Editorial3", "Genero1"};
    //     insertar_Despues(li, libro3);
}
#endif