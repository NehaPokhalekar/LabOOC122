#include<iostream>
using namespace std;
class Product
{
    private:
        int productid;
        string productname;
        int quantity;
        float price;
        float total;
    public:
        void productdetails()
        {
            cout<<"Enter Product ID: ";
            cin>>productid;
            cout<<"Enter Product Name: ";
            getline(cin>>ws, productname);
            cout<<"Enter Quantity: ";
            cin>>quantity;
            cout<<"Enter Price: ";  
            cin>>price;
        }
        void totalcost()
        {
            total = quantity * price;
        }
        void displaydetails()
        {
            cout<<"-----Product Details-----"<<endl;
            cout<<"Product ID: "<<productid<<endl;
            cout<<"Product Name: "<<productname<<endl;
            cout<<"Quantity: "<<quantity<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Total Price: "<<total<<endl;
        }
       
        
};
int main()
{
    Product p;
    p.productdetails(); 
    p.totalcost();
    p.displaydetails();
    return 0;
}