In C, structures or structs allow a method of combining different datatypes into one group or `struct` - a collection of variables of different types. 

```
struct Person {
    char name[50];
    char location[30];
    int age;
    char favorite_food[20];
};
```
 
Here we define the struct `Person` with several properties. We can reuse this struct like so. 

```
int main(){
    struct Person person1;
    person1.age = 30;
    strcpy(person1.name, "Bob");
    strcpy(person1.location, "San Fransisco");
    strcpy(person1.favorite_food, "Mashed Potatoes");

    printf("Hello my name is %s. I live in %s, I am %d years old, and my favorite food is %s.\n", person1.name, person1.location, person1.age, person1.favorite_food);

    return 0;
}
```

Notice that when we define the properties that are character arrays, we have to use the `strcpy` method to place the new string into the array structure. 