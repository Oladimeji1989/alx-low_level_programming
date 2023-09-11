#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE
/**
 * struct dog - creating dog infomation using struct
 * @name: dog name parameter
 * @age: dog age parameter
 * @owner: dog owner parameter
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
