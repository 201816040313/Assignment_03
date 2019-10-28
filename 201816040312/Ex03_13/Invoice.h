//接口文件
#include <string> // program uses C++ standard string class
using namespace std;

class Invoice
{
public:
    Invoice(string,string,int,int);//initializes the datas
    void settype(string);
    string gettype();
    void setdescribe(string);
    string getdescribe();
    void setnumber(int);
    int getnumber();
    void setprice(int);
    int getprice();
    int getInvoiceamount();
private:
    string type,describe;//member datas
    int number,price;
};
