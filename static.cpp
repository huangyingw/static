#include <stdio.h>
#include <iostream>
using namespace std;

class Myclass
{
  public:
    Myclass(int a,int b,int c);
    static void GetSum();
  private:
    int a,b,c;
    static int Sum;//������̬���ݳ�Ա
};
int Myclass::Sum=0;//���岢��ʼ����̬���ݳ�Ա


Myclass::Myclass(int a,int b,int c)
{
  this->a=a;
  this->b=b;
  this->c=c;
  Sum+=a+b+c;
}

// GetSum could be called both from instances or just directly from class
void Myclass::GetSum()
{
  //cout<<a<<endl; //������룬a�ǷǾ�̬���ݳ�Ա
  cout<<"Sum="<<Sum<<endl;
}

int main(void)
{
  Myclass M(1,2,3);
  M.GetSum();
  Myclass N(4,5,6);
  N.GetSum();
  M.GetSum();
  Myclass::GetSum();
  return 0;
}
