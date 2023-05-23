#include <stdio.h>

#include "animal_lion.h"
#include "animal_predator.h"

struct _AnimalLion {
	AnimalCat parent;
};

static void animal_lion_predator_interface_init(AnimalPredatorInterface *iface);

G_DEFINE_TYPE_WITH_CODE (AnimalLion, animal_lion, ANIMAL_TYPE_CAT,
			         G_IMPLEMENT_INTERFACE (ANIMAL_TYPE_PREDATOR,
						animal_lion_predator_interface_init))

static void animal_lion_real_say_meow(AnimalLion* self) {
	printf("Lion say: RRRR!!!\n");
}

static void animal_lion_class_init(AnimalLionClass* self) {
	printf("First instance of AnimalLion was created.\n");
	AnimalCatClass* parent_class = ANIMAL_CAT_CLASS (self);
	parent_class->say_meow = animal_lion_real_say_meow;
}

static void animal_lion_init(AnimalLion* self) {
	printf("Lion cub was born.\n");
}

AnimalLion* animal_lion_new() {
	return g_object_new(ANIMAL_TYPE_LION, NULL);
}

static void animal_lion_predator_hunt(AnimalLion* self) {
	printf("Lion hunts. Beware!\n");
}

static void animal_lion_predator_eat_meat(AnimalLion* self, int quantity) {
	printf("Lion eats %d kg of meat.\n", quantity);
}

static void animal_lion_predator_interface_init(AnimalPredatorInterface* iface) {
	iface->hunt = animal_lion_predator_hunt;
	iface->eat_meat = animal_lion_predator_eat_meat;
}