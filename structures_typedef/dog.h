#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que describe un perro
 * @name: nombre del perro (cadena de caracteres)
 * @age: edad del perro (número flotante)
 * @owner: nombre del dueño del perro (cadena de caracteres)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
