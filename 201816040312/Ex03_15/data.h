using namespace std;

class Data
{
public:
    Data(int,int,int);//constructor initializes year month,day
    void setyear(int);
    int getyear();
    void setmonth(int);
    int getmonth();
    void setday(int);
    int getday();
    void displayData();
private:
    int year,month,day;
};
