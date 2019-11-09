#include<iostream>
using namespace std;
//#include<conio.h>
class PRACTICE
{

        public:
        void print();
        void show();    
};
void PRACTICE::print()
{
    cout<<"This is print"<<endl;
}
void PRACTICE::show()
{
    cout<<"This is show"<<endl;
}
int main()
{
    PRACTICE pra;
    pra.print();
    pra.show();

}