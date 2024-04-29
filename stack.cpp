#include <iostream>

class Stack {
private:
    int *stack_array;
    int top;
    int size;

public:
    // Default constructor
    Stack() : top(-1), size(10) {
        stack_array = new int[size];
    }

    // Parameterized constructor
    Stack(int s) : top(-1), size(s) {
        stack_array = new int[size];
    }

    // Destructor
    ~Stack() {
        delete[] stack_array;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Push data onto stack
    bool push(int data) {
        if (isFull()) {
            std::cout << "Stack overflow!\n";
            return false;
        }
        stack_array[++top] = data;
        return true;
    }

    // Pop data from stack
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow!\n";
            return -1;
        }
        return stack_array[top--];
    }
};

class Queue {
private:
    int *queue_array;
    int front;
    int rear;
    int size;

public:
    // Default constructor
    Queue() : front(0), rear(-1), size(10) {
        queue_array = new int[size];
    }

    // Parameterized constructor
    Queue(int s) : front(0), rear(-1), size(s) {
        queue_array = new int[size];
    }

    // Destructor
    ~Queue() {
        delete[] queue_array;
    }

    // Check if queue is empty
    bool isEmpty() {
        return rear < front;
    }

    // Check if queue is full
    bool isFull() {
        return rear == size - 1;
    }

    // Add data to the rear of the queue
    bool enqueue(int data) {
        if (isFull()) {
            std::cout << "Queue overflow!\n";
            return false;
        }
        queue_array[++rear] = data;
        return true;
    }

    // Remove data from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue underflow!\n";
            return -1;
        }
        return queue_array[front++];
    }
};

int main() {
    // Stack operations
    std::cout << "Stack Operations:\n";
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);

    while (!stack.isEmpty()) {
        std::cout << "Popped from stack: " << stack.pop() << std::endl;
    }

    // Queue operations
    std::cout << "\nQueue Operations:\n";
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    while (!queue.isEmpty()) {
        std::cout << "Dequeued from queue: " << queue.dequeue() << std::endl;
    }

    return 0;
}
