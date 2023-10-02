#include <iostream>
using namespace std;

class Sample
{
public:
    int number_one;
    int number_two;

    void assign_value(int number_one, int number_two);
    void print_value();
    // friend Sample operator+(Sample, Sample);
    friend istream &operator>>(istream &, Sample &);
    friend ostream &operator<<(ostream &, Sample &);
};

void Sample::assign_value(int number_one, int number_two)
{
    this->number_one = number_one;
    this->number_two = number_two;
}

void Sample::print_value()
{
    cout << number_one << " " << number_two << endl;
}

ostream &operator<<(ostream &dout, Sample &temp)
{
    dout << temp.number_one << " " << temp.number_two << endl;
    return (dout);
}

// Sample Sample::operator+(Sample c)
// {
//     Sample temp;
//     temp.number_one = number_one + c.number_one;
//     temp.number_two = number_two + c.number_two;

//     return temp;
// }

// Sample operator+(Sample temp_one, Sample temp_two)
// {
//     Sample store;
//     store.number_one = temp_one.number_one + temp_two.number_one;
//     store.number_two = temp_one.number_two + temp_two.number_two;
//     return store;
// }

int main()
{
    Sample obj_one;
    obj_one.assign_value(10, 20);
    cout << obj_one;
}