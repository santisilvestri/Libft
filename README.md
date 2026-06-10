*Este proyecto ha sido creado como parte del currículo de 42 por sasilves.*

# Libft

## Descripción

**Libft** es una librería escrita en lenguaje C que implementa un conjunto de funciones de propósito general, inspiradas en funciones estándar de la `libc` y ampliadas con utilidades adicionales para el manejo de cadenas, memoria, conversión de datos, escritura en descriptores de archivo y listas enlazadas.

El objetivo principal del proyecto es construir una librería propia que pueda ser reutilizada en futuros proyectos del cursus de 42, comprendiendo en profundidad el comportamiento interno de funciones fundamentales del lenguaje C.

La librería se compila como un archivo estático llamado:

```bash
libft.a
```

Este archivo puede enlazarse posteriormente con otros programas en C.

---

## Características principales

La librería incluye funciones organizadas en tres grupos principales:

1. Funciones equivalentes a funciones clásicas de la `libc`.
2. Funciones adicionales para manipulación de cadenas, memoria y salida.
3. Funciones para trabajar con listas enlazadas mediante la estructura `t_list`.

Todas las funciones siguen los prototipos definidos en el subject del proyecto y respetan las restricciones técnicas indicadas por 42.

---

## Estructura de la librería

### Funciones de clasificación de caracteres

Estas funciones analizan caracteres y devuelven `1` si cumplen la condición evaluada, o `0` en caso contrario.

```c
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
```

### Funciones de conversión de caracteres

```c
int ft_toupper(int c);
int ft_tolower(int c);
```

Estas funciones convierten caracteres entre minúsculas y mayúsculas cuando corresponde.

---

## Funciones de memoria

La librería implementa funciones para inicializar, copiar, mover, comparar y buscar datos en bloques de memoria.

```c
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
```

Estas funciones son esenciales para trabajar con memoria dinámica, buffers y estructuras de datos en C.

---

## Funciones de cadenas

La librería incluye funciones para medir, copiar, concatenar, buscar y comparar cadenas de caracteres.

```c
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s1);
```

También se incluye la conversión de cadenas numéricas a enteros:

```c
int ft_atoi(const char *nptr);
```

---

## Funciones adicionales

Estas funciones amplían la funcionalidad básica de la librería, permitiendo crear nuevas cadenas, dividir texto, aplicar funciones sobre caracteres y convertir enteros a cadenas.

```c
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
```

Estas funciones utilizan memoria dinámica cuando corresponde, por lo que el usuario de la librería debe liberar la memoria devuelta cuando ya no sea necesaria.

---

## Funciones de salida

Estas funciones permiten escribir caracteres, cadenas y números en un descriptor de archivo determinado.

```c
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
```

Ejemplos de descriptores comunes:

```text
0   stdin
1   stdout
2   stderr
```

---

## Listas enlazadas

La librería define la estructura `t_list` para trabajar con listas enlazadas simples.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Cada nodo contiene un puntero genérico `void *content`, lo que permite almacenar distintos tipos de datos, y un puntero `next` hacia el siguiente nodo de la lista.

### Funciones de listas

```c
t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

Estas funciones permiten crear, recorrer, modificar, eliminar y transformar listas enlazadas de forma controlada.

---

## Instrucciones de compilación

Para compilar la librería, ejecutar:

```bash
make
```

Esto genera el archivo estático:

```bash
libft.a
```

Para eliminar los archivos objeto generados durante la compilación:

```bash
make clean
```

Para eliminar los archivos objeto y la librería compilada:

```bash
make fclean
```

Para recompilar completamente el proyecto:

```bash
make re
```

---

## Uso de la librería

Para utilizar `libft.a` en otro programa, se debe incluir el header correspondiente:

```c
#include "libft.h"
```

Luego, compilar enlazando la librería:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

Ejemplo básico:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, Libft!", 1);
    return (0);
}
```

Compilación:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

Ejecución:

```bash
./a.out
```

Salida esperada:

```text
Hello, Libft!
```

---

## Requisitos técnicos

El proyecto respeta las siguientes condiciones:

- Código escrito en lenguaje C.
- Compilación con las flags `-Wall -Wextra -Werror`.
- Uso de `cc` como compilador.
- Generación de la librería mediante `ar`.
- Archivo final `libft.a` creado en la raíz del repositorio.
- Ausencia de variables globales.
- Uso de funciones auxiliares `static` cuando corresponde.
- Gestión correcta de memoria dinámica.
- Makefile con las reglas obligatorias:
  - `NAME`
  - `all`
  - `clean`
  - `fclean`
  - `re`

---

## Archivos principales

```text
Makefile
libft.h
ft_*.c
```

Todos los archivos fuente se encuentran en la raíz del repositorio, de acuerdo con las instrucciones del proyecto.

---

## Recursos

Para el desarrollo y comprensión de este proyecto se pueden consultar las siguientes referencias:

- Manual de C para funciones estándar:
  - `man strlen`
  - `man memset`
  - `man memcpy`
  - `man memmove`
  - `man calloc`
  - `man atoi`

- Documentación sobre memoria dinámica:
  - `man malloc`
  - `man free`

- Documentación sobre escritura en descriptores de archivo:
  - `man write`

- Documentación sobre creación de librerías estáticas:
  - `man ar`

- *The C Programming Language*, Brian W. Kernighan & Dennis M. Ritchie.

---

## Estado del proyecto

Proyecto desarrollado como primera librería personal en C dentro del cursus de 42.

La librería está pensada para servir como base reutilizable en futuros proyectos, facilitando el trabajo con memoria, cadenas, conversión de datos, salida por descriptores de archivo y estructuras dinámicas como listas enlazadas.
