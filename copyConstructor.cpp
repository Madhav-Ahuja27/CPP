// // #include <iostream>
// // using namespace std;

// // void Display(){
// //   cout<<endl<<"Roll"<<Roll;
// //   cout<<endl<<"Name"<<Name;
// //   cout<<endl<<"Marks"<<Marks;
// // };

// // int main(){
// //   StudentS1(2,"ABC",90);
// //   StudentS2(S1);
// //   cout<<Display();
// //   cout<<endl;
// //   cout<<"Values in object S2";
// //   S2.Display();
// // }
// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
//     int Roll;
//     string Name;
//     float Marks;

// public:
//     Student(int r, string nm, float m)
//     {
//         Roll = r;
//         Name = nm;
//         Marks = m;
//     }
//     Student(Student &S)
//     {
//         Roll = S.Roll;
//         Name = S.Name;
//         Marks = S.Marks;
//     }
//     void Display()
//     {
//         cout << endl << "Roll: " << Roll;
//         cout << endl << "Name: " << Name;
//         cout << endl << "Marks: " << Marks; 
//     }
// };

// int main()
// {
//     Student S1(2, "ABC", 90);
//     Student S2(S1);
//     // cout<<Display();
//     cout << "\n-------";
//     cout << "\nValues in object S2:";
//     S2.Display();
//     return 0; 
// }
#include <iostream>
using namespace std;

class Shape 
{
public:
   void calculateArea(float length, float width) 
    {
        cout << "Area of the rectangle: " << length * width << endl;
    }

    void calculateArea(int side) 
    {
        cout << "Area of the square: " << side * side << endl;
    }
};

int main() 
{
    Shape shape;

    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    shape.calculateArea(length, width);

    float side;
    cout << "Enter side length of the square: ";
    cin >> side;
    shape.calculateArea(side);

    return 0;
}
