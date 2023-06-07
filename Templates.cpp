Hans slides gav legit ingen mening så bad chatten forklarer det meget bedre lol

In C++, a template is a powerful feature that allows you to define generic classes and functions. 
It enables you to write code that can operate on different data types without having to rewrite 
the code for each specific type.

Templates are essentially a mechanism for parameterizing types. They allow you to define a blueprint 
for a class or function that can work with different data types or with generic types. This makes C++ 
templates highly flexible and reusable.

There are two main types of templates in C++:

1. Function Templates: Function templates allow you to define a single function that can be used with different data types. You specify the generic type parameter(s) inside angle brackets "<>" after the function name. For example:

template <typename T>
    T add(T a, T b) {
        return a + b;
}

In the above example, add is a function template that can be used with any data type. The typename T declares a generic type parameter T, and within the function, T is used to represent the type of the parameters and return value. The compiler generates the appropriate code for each specific type used when the function is called.


2. Class Templates: Class templates allow you to define a generic class that can be used with different data types. Similar to function templates, you specify the generic type parameter(s) after the class name. For example:


template <typename T>
class Stack {
    private:
        T data[100];
        int top;

    public:
        Stack() : top(-1) {}
        void push(T item) {
            data[++top] = item;
        }
        T pop() {
            return data[top--];
        }
};

In the above example, Stack is a class template that can be instantiated with any data type. The typename T declares a generic type parameter T, and within the class, T is used as the type for the array data and the parameter and return type for member functions.


You can use templates to create specialized instances of functions or classes by providing specific types for the generic parameters. This process is called template specialization. It allows you to define different behavior for specific types while keeping the generic implementation for others.

Templates are extensively used in C++ standard library containers and algorithms to provide generic solutions that work with various data types. They provide a way to write reusable code and reduce code duplication.


