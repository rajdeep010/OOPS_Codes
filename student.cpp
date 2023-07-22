
class Student {
    const int roll;
    int age;

    static int totalStudents;

public:
    
    // Initialization list:
    // is used for initializing the constant member variables
    // as we can't do that in the normal way as done for 'age'

    Student(int r, int a) : roll(r) {
        age = a;
        cout << "Default Constructor called" << endl;
        totalStudents++;
    }

    // declaring as constant function as not changing any value
    void print() const {
        cout << roll << " " << age << endl;
    }

    int getRoll() const {
        return roll;
    }

    int getAge() const {
        return age;
    }

    // static function
    // can only access static variables
    
    // static functions can only access static variables

    // but non static functions can use static variables

    static int getTotalStudents() {
        return totalStudents;
    }
};

// can't initialize static variables inside class

// static variables are related to class, and not to object
// when a object is created is does not create a copy of static variable
// but we can access them as s1.totalStudents (if property is public)

int Student :: totalStudents = 0;