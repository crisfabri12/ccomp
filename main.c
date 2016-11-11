#include <iostream>
#define mini2(x,y) (x<y) ? a:b
using namespace std;
#include "point.h"
#include "polygon.h"
#include <vector>
template <typename T>
class pila{
private:
    int N = 10;
    int tope;
    vector<T> arreglo;
public:
    pila(){
        tope = -1;
    }
    bool empty_(){
        if (tope == -1)
            return true;
        else
            return false;
    }
    void push(const T &item){
        arreglo.push_back(item);
    }
    T top(){
        for (int i = 0;i<arreglo.size();++i){
            if (i==arreglo.size()-1)
                cout<< arreglo[i];
        }

    }
    void pop()
    {
        arreglo.pop_back();
    }
    friend pila operator +(pila t1,pila t2){
        pila aux;
        aux.N = t1.N + t2.N;
        aux.tope = t1.tope + t2.tope;
        for(int i=0;i < t1.arreglo.size();++i)
            aux.push(t1.arreglo[i]);
        for(int i=0;i < t2.arreglo.size();++i)
            aux.push(t2.arreglo[i]);
        return aux;
    }
};
template<typename T>
T mini(T x, T y){
    if (x<y)
        return x;
    return  y;

}
int main()
{

    Rectangle *rec;
    triangle *t;
    t = reinterpret_cast <triangle*>(rec);
    pila<int> h;
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(6);
    h.top();
    h.pop();
    h.top();
    pila<int> q;
    q.push(1);
    q.push(4);
    q.push(9);
    pila<int> f;
    f =  h+q;
    f.pop();
    f.pop();




    f.top();


}

