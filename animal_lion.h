#ifndef _ANIMAL_LION_H_
#define _ANIMAL_LION_H_

#include "animal_cat.h"

G_BEGIN_DECLS

#define ANIMAL_TYPE_LION animal_lion_get_type()

G_DECLARE_FINAL_TYPE (AnimalLion, animal_lion, ANIMAL, LION, AnimalCat)

AnimalLion* animal_lion_new();

G_END_DECLS

#endif /* _ANIMAL_LION_H_ */