#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

    public :
    void initcounter(void) {counter='0';}
    void setprice(void);
    void displayprice(void);
}
void shop::setprice(void)
{
    cout<<"Enter ID of your item no"<<counter+1<<endl;
    cin>>itemid[counter]<<endl;
     cout<<"Enter price of your item no"<<counter+1<<endl;
    cin>>itemprice[counter]<<endl;
    counter++;

}
void shop :: displayprice(void)
{
    for(int i=0;i<counter<i; i++)
{
    cout<<"The price of the item with item ID"<<itemid[i]<<"is"<<itemprice[i]<<endl;
} 
} 
int main()
{
    shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
   
}