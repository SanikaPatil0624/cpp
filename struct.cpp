#include <stdio.h>


struct Person {
    char name[50];
    int age;
};

struct Student {
    struct Person info; // Person structure embedded within Student structure
    int studentID;
    float GPA;
};


struct Employee {
    struct Person info; // Person structure embedded within Employee structure
    int employeeID;
    float salary;
};

int main() {
    // Creating a person
    struct Person person1;
    printf("Enter person's name: ");
    scanf("%s", person1.name);
    printf("Enter person's age: ");
    scanf("%d", &person1.age);

   
    struct Student student1;
    printf("Enter student's name: ");
    scanf("%s", student1.info.name);
    printf("Enter student's age: ");
    scanf("%d", &student1.info.age);
    printf("Enter student's ID: ");
    scanf("%d", &student1.studentID);
    
   
    struct Employee employee1;
    printf("Enter employee's name: ");
    scanf("%s", employee1.info.name);
    printf("Enter employee's age: ");
    scanf("%d", &employee1.info.age);
    printf("Enter employee's ID: ");
    scanf("%d", &employee1.employeeID);
    printf("Enter employee's salary: ");
    scanf("%f", &employee1.salary);

    
    printf("\nPerson:\nName: %s\nAge: %d\n\n", person1.name, person1.age);

    printf("Student:\nName: %s\nAge: %d\nID: %d\nGPA: %.2f\n\n", student1.info.name, student1.info.age, student1.studentID, student1.GPA);

    printf("Employee:\nName: %s\nAge: %d\nID: %d\nSalary: %.2f\n\n", employee1.info.name, employee1.info.age, employee1.employeeID, employee1.salary);

    return 0;
}
