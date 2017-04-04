#include <iostream.h>
class personal_info     /*It is "public" that "struct" preserve the level of protecting.*/
{                       /*It is "private" that "class" preserve the level of protecting.*/
  public:               /*Because "class" preserve the level of protecting is private,*/
  {                     /*need to set up public level in addition.*/
    unsigned int age;
    unsigned int weight;  /*The following struct change into class*/
    char *name;
  }
};
class personal_info info_diff(class personal_info people_a,class personal_info people_b)
{
  class personal_info inf_dif_sub;
  inf_dif_sub.age=people_a.age-people_b.age;
  inf_dif_sub.weight=people_a.weight-people_b.weight;
  return(inf_dif_sub);
}
int main(void)
{
  class personal_info people[2]={{33, 70, "George"},{18, 45, "Mary"}};
  class personal_info inf_dif;
  inf_dif=info_diff(people[0], people[1]);
  cout << "Differences between " << people[0].name << " and " << people[1].name << endl;
  cout << "Age:" << inf_dif.age << " Weight:" << inf_dif.weight << endl;
  getchar();
  return 0;
}
