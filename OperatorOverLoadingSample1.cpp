#include <iostream>
using namespace std;

/*
Size - height , width. S1.Add(S2) ----S1.Height + S2.Height, S1.Width + S2.Width
*/
// Size s6 =  (s1 + s2)/(s1 - s2);
//s6.Display();
class Size
{
    private:
        int width;
        int height;
    public:
        Size(int w, int h):width(w), height(h){}

        Size Add(const Size &s)
        {
            Size newSize(width + s.width, height + s.height);       
            return newSize;
        }

        Size operator +(const Size &s)
        {
            Size newSize(width + s.width, height + s.height);       
            return newSize;
        }

        void Grow()
        {
            width++; //width = width + 1;
            height++; //height = height + 1;
        }
        Size operator++()//Prefix
        {
            width++; //width = width + 1;
            height++; //height = height + 1;
            return *this;
        }

        Size operator++(int)//Post
        {
            Size oldSize = *this;
            width++;
            height++;
            return oldSize;
        }

        void Display()
        {
            cout << "Size : Width = " << width << " Height = " << height << endl;
        }

};

int main()
{
    Size s1(10,20) , s2(10, 30);

   //Size s3 = s1.Add(s2);

    Size s3 = s1 + s2;   

    s1.Display();
    s2.Display();
    s3.Display();

    //s3.Grow();
    //Size s5 = ++s3;
    Size s5 = s3++;
    s3.Display();
    s5.Display();

    //s3++;
    //cout << "After grow ---" << endl;
    //s3.Display();

    return 0;
}