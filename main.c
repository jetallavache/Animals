#include "animal_cat.h"
#include "animal_tiger.h"
#include "animal_lion.h"
#include "animal_predator.h"

int main(int argc, char** argv) {
	AnimalTiger* tiger = animal_tiger_new(2);
	animal_predator_hunt(tiger);
	animal_predator_eat_meat(tiger, 100500);

    AnimalLion* lion = animal_lion_new(3);
    animal_predator_hunt(lion);
    animal_predator_eat_meat(lion, 0);

    animal_cat_say_meow(tiger);
    animal_cat_say_meow(lion);

    g_print(G_OBJECT_TYPE_NAME (lion));

    return 0;
}