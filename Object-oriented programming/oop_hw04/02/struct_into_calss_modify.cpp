#include <iostream.h>
typedef class personal_info     /*It is "public" that "struct" preserve the level of protecting.*/
{                       /*It is "private" that "class" preserve the level of protecting.*/
  unsigned int age;     /*If you still want to use preserve of "class", because this preserve is "private",*/
  unsigned int weight;  /*you have to set member function to indirect storage.*/
  char *name;
  public:
  {
    void set(unsigned int in_age,unsigned int in_weight,char *in_name)
    {
      age=in_age;
      weight=in_weight;
      *name=*in_name;
    }
    unsigned int get_age(void)
    {
      return age;
    }
    unsigned int get_weight(void)
    {
      return weight;
    }
    char* get_name(void)
    {
      return *name;
    }
  }
}per;                     /*The following struct change into class, and use typedef to reduce the inputted code.*/
per info_diff(per people_a,per people_b)
{
  per inf_dif_sub;
  inf_dif_sub.age=people_a.age-people_b.age;
  inf_dif_sub.weight=people_a.weight-people_b.weight;
  return(inf_dif_sub);
}
int main(void)
{
  per people[2];
  people[0].set(33, 70, "George");
  people[1].set(18, 45, "Mary");
  per inf_dif=info_diff(people[0], people[1]);
  cout << "Differences between " << people[0].name << " and " << people[1].name << endl;
  cout << "Age:" << inf_dif.age << " Weight:" << inf_dif.weight << endl;
  getchar();
  return 0;
}
