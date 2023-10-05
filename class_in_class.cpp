#include <iostream>
using namespace std;

class OuterClass {
public:
    // Public member function of the OuterClass
    void displayOuterValue(int value) {
        outerValue = value;
        cout << "OuterClass value: " << outerValue << std::endl;
    }

    // Nested InnerClass
    class InnerClass {
    public:
        // Public member function of the InnerClass
        void displayInnerValue(int value) {
            innerValue = value;
            cout << "InnerClass value: " << innerValue << std::endl;
        }

    private:
        int innerValue;
    };

private:
    int outerValue;
};

int main() {
    // Create an instance of OuterClass
    OuterClass outer;

    // Create an instance of InnerClass using OuterClass's scope
    OuterClass::InnerClass inner;

    // Call member functions of both classes
    outer.displayOuterValue(42);
    inner.displayInnerValue(10);

    return 0;
}
