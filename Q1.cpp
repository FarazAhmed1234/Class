#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Setter methods
    void set_age(int a) {
        age = a;
    }

    void set_first_name(string fn) {
        first_name = fn;
    }

    void set_last_name(string ln) {
        last_name = ln;
    }

    void set_standard(int s) {
        standard = s;
    }

    // Getter methods
    int get_age() {
        return age;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    int get_standard() {
        return standard;
    }

    // Method to return a string with all details in a comma-separated format
    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    Student st;

    int age, standard;
    string first_name, last_name;

    // Input
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;

    // Set values
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    // Output
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << st.to_string() << endl;

    return 0;
}
