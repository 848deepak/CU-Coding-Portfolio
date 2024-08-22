#include<iostream>
using namespace std;
class operation{
    float a;
    float b;
    //float sum;
    //float diffrence;
    public:
    void samay();
    void sood();
};
inline void operation :: samay(){ //func over head call
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
}
inline void operation :: sood(){
    cout<<"Sum is:"<<a+b<<endl;
    cout<<"Difference is:"<<a-b<<endl;
}
int main(){
    operation A;
    A.samay();
    A.sood();
    return 0;
}