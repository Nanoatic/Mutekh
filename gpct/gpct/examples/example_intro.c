// example_intro.c GPCT example
// Copyright Alexandre Becoulet (C) 2009,
// Released under the GPL v3, see COPYING

#include <stdio.h>
#include <gpct/cont_slist.h>

struct myitem
{
  CONTAINER_ENTRY_TYPE(SLIST)   list_entry;
  const char                    *data;
};

CONTAINER_TYPE(mylist, SLIST, struct myitem, list_entry);
CONTAINER_FUNC(mylist, SLIST, static, myfunc);

int main()
{
  mylist_root_t list;

  struct myitem a = { .data = "foo" };
  struct myitem b = { .data = "bar" };

  myfunc_init(&list);

  myfunc_push(&list, &a);
  myfunc_push(&list, &b);

  puts(myfunc_pop(&list)->data);
  puts(myfunc_pop(&list)->data);

  return 0;
}

