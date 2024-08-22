/*
Constructors and Destructors in C++
Constructors are special class functions which performs initialization of every object. The Compiler calls the Constructor whenever an object is created. Constructors initialize values to object members after storage is allocated to the object.

Whereas, Destructor on the other hand is used to destroy the class object.

Following is the syntax of defining a constructor function in a class:

class A
{
    public:
    int x;
    // constructor
    A()
    {
        // object initialization
    }
};

While defining a constructor you must remember that the name of constructor will be same as the name of the class, and constructors will never have a return type.

Constructors can be defined either inside the class definition or outside class definition using class name and scope resolution :: operator.

class A
{
    public:
    int i;
    A(); // constructor declared
};

// constructor definition
A::A()   
{
    i = 1;
}
Types of Constructors in C++
Constructors are of three types:

Default Constructor
Parametrized Constructor
Copy Constructor
Default Constructors
Default constructor is the constructor which doesn't take any argument. It has no parameter.

Syntax:

class_name(parameter1, parameter2, ...)
{ 
    // constructor Definition 
}
For example:
class Cube
{
    public:
    int side;
    Cube()
    {
        side = 10;
    }
};

int main()
{
    Cube c;
    cout << c.side;
}
Output: 10
In this case, as soon as the object is created the constructor is called which initializes its data members.

A default constructor is so important for initialization of object members, that even if we do not define a constructor explicitly, the compiler will provide a default constructor implicitly.

class Cube
{
    public:
    int side;
};

int main()
{
    Cube c;
    cout << c.side;
}
0 or any random value
In this case, default constructor provided by the compiler will be called which will initialize the object data members to default value, that will be 0 or any random integer value in this case.

Parameterized Constructors
These are the constructors with parameter. Using this Constructor you can provide different values to data members of different objects, by passing the appropriate values as argument.

For example:

class Cube
{
    public:
    int side;
    Cube(int x)
    {
        side=x;
    }
};

int main()
{
    Cube c1(10);
    Cube c2(20);
    Cube c3(30);
    cout << c1.side;
    cout << c2.side;
    cout << c3.side;
}

10 20 30

By using parameterized constructor in above case, we have initialized 3 objects with user defined values. We can have any number of parameters in a constructor.

Copy Constructors
These are special type of Constructors which takes an object as argument, and is used to copy values of data members of one object into other object. 

Constructor Overloading in C++
Just like other member functions, constructors can also be overloaded. In-fact when you have both default and parameterized constructors defined in your class you are having Overloaded Constructors, one with no parameter and other with parameter.

You can have any number of Constructors in a class that differ in parameter list.

class Student
{
    public:
    int rollno;
    string name;
    // first constructor
    Student(int x)
    {
        rollno = x;
        name = "None";
    }
    // second constructor
    Student(int x, string str)
    {
        rollno = x;
        name = str;
    }
};

int main()
{
    // student A initialized with roll no 10 and name None
    Student A(10);
    
    // student B initialized with roll no 11 and name John
    Student B(11, "John");
}

In above case we have defined two constructors with different parameters, hence overloading the constructors.

One more important thing, if you define any constructor explicitly, then the compiler will not provide default constructor and you will have to define it yourself.

In the above case if we write Student S; in main(), it will lead to a compile time error, because we haven't defined default constructor, and compiler will not provide its default constructor because we have defined other parameterized constructors.

Destructors in C++
Destructor is a special class function which destroys the object as soon as the scope of object ends. The destructor is called automatically by the compiler when the object goes out of scope.

The syntax for destructor is same as that for the constructor, the class name is used for the name of destructor, with a tilde ~ sign as prefix to it.

class A
{
    public:
    // defining destructor for class
    ~A() 
    {
        // statement
    }   
};

Destructors will never have any arguments.

Example to see how Constructor and Destructor are called
Below we have a simple class A with a constructor and destructor. We will create object of the class and see when a constructor is called and when a destructor gets called.

class A
{
    // constructor
    A()
    {
        cout << "Constructor called";
    }

    // destructor
    ~A()
    {
        cout << "Destructor called";
    }
};

int main()
{
    A obj1;   // Constructor Called
    int x = 1
    if(x)
    {
        A obj2;  // Constructor Called
    }   // Destructor Called for obj2
} //  Destructor called for obj1

Constructor called Constructor called Destructor called Destructor called

When an object is created the constructor of that class is called. The object reference is destroyed when its scope ends, which is generally after the closing curly bracket } for the code block in which it is created.

The object obj2 is destroyed when the if block ends because it was created inside the if block. And the object obj1 is destroyed when the main() function ends.

Single Definition for both Default and Parameterized Constructor
In this example we will use default argument to have a single definition for both default and parameterized constructor.

class Dual
{
    public:
    int a;
    Dual(int x=0)
    {
        a = x;
    }
};

int main()
{
    Dual obj1;
    Dual obj2(10);
}

Here, in this program, a single Constructor definition will take care for both these object initializations. We don't need separate default and parameterized constructors.



*/