#ifndef _ANIMAL_CAT_H_
#define _ANIMAL_CAT_H_

#include <glib-object.h>

G_BEGIN_DECLS

#define ANIMAL_TYPE_CAT animal_cat_get_type()

G_DECLARE_DERIVABLE_TYPE (AnimalCat, animal_cat, ANIMAL, CAT, GObject) 

typedef struct _AnimalCat AnimalCat;
typedef struct _AnimalCatClass AnimalCatClass;
typedef struct _AnimalCatPrivate AnimalCatPrivate;

struct _AnimalCatClass {
	GObjectClass parent_class;
	void (*say_meow) (AnimalCat*);
    gpointer padding[10];
};

AnimalCat* animal_cat_new();

void animal_cat_say_meow(AnimalCat* self);

G_END_DECLS

#endif /* _ANIMAL_CAT_H_ */