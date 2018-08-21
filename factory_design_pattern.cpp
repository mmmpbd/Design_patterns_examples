#include <iostream>
#include <string>
using namespace std;

class Toy{
protected:
    string name;
    float price;
public:
    virtual void applylabel() = 0;
    virtual void showproduct() = 0;
};

class car : public Toy {
    void applylabel(){
        name = "toyota";
        price = 25000;
    }
    void showproduct(){
        cout<<"name of car: "<<name<<endl<<"price: "<<price<<endl;
    }
};

class truck : public Toy {
    void applylabel(){
        name = "Ford";
        price = 35000;
    }
    void showproduct(){
        cout<<"name of truck: "<<name<<endl<<"price: "<<price<<endl;
    }
};

class toyfactory{
        //static Toy* mytoy = NULL;
        //static Toy* mytoy;
    public: 
        //static Toy* mytoy;
        static int hey;
        static Toy* get_toy(int id){
            hey++;
            cout<<hey<<endl;
            Toy* mytoy;
            if(id == 1){
                mytoy = new car;
                return mytoy;
            }
            else{
                mytoy = new truck;
                return mytoy;
            }
        }
};

int toyfactory::hey = 0;

int main(){
    Toy* tt = toyfactory::get_toy(9);
    tt->applylabel();
    tt->showproduct();
    return 0;
}
