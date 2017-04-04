#include <stdio.h>
struct personal_info
{
  unsigned int age;
  unsigned int weight;
  char *name;
};
struct personal_info info_diff(struct personal_info people_a, struct personal_info people_b)
{
  struct personal_info inf_dif_sub;
  inf_dif_sub.age=people_a.age-people_b.age;
  inf_dif_sub.weight=people_a.weight-people_b.weight;
  return(inf_dif_sub);
}
int main()
{
  struct personal_info people[2]={{33, 70, "George"},{18, 45, "Mary"}};
  struct personal_info inf_dif;
  inf_dif=info_diff(people[0], people[1]);
  printf("Differences between %s and %s\n",people[0].name, people[1].name);
  printf("Age:%2d Weight:%2d\n",inf_dif.age, inf_dif.weight);
  getch();
  return 0;
}
