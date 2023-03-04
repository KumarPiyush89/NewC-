/* Create a type for storing fraction number*/
#include<iostream>
using namespace std;
class FractionNumber
{
    private:
    int num;
    int dnum;
    public:
    void setNum(int n)
    {
        num=n;
    }
    void setDnum(int d)
    {
        if(d!=0)
        dnum=d;
        else
        dnum=1;
    }
    int getNum()
    {
        return num;
    }
    int getdNum()
    {
        return dnum;
    }

};
int main()
{
    FractionNumber n1,n2;
    n1.setNum(22);
    n1.setDnum(7);
    n2.setNum(17);
    n2.setDnum(0);
    cout<<"n1="<<n1.getNum()<<"/"<<n1.getdNum()<<endl;
    cout<<"n2="<<n2.getNum()<<"/"<<n2.getdNum();
    return 0;

}
