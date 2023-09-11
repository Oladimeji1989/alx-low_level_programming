#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE
/**
 * struct dog - creating dog infomation using struct
 * @name: dog name parameter
 * @age: dog age parameter
 * @owner: dog owner parameter
 */

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
