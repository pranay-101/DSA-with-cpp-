#include<iostream>
using namespace std;

const int max_s = 100;
int queue[max_s], f = -1, r = -1;

void enq(int v){
    if ( r == max_s - 1){
        cout << "Queue is full"<<endl;
        return;
    }
    if(f == -1) f = 0 ;
    queue[++r] = v;
    cout << v << " enqueued" << endl;

}

void deq(){
    if(f == -1 || f > r){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << queue[f++]<< " dequeued" << endl;
    return;
    if(f>r) f = r;

}
void display(){
    if(f == -1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout << "Queue : "<< endl;
    for ( int i = f; i <= r; i++) cout << queue[i] << " ";

    cout << endl;

}

int main(){
    enq(10);
    enq(20);
    enq(30);
    display();
    deq();
    display();
    return 0;
}
