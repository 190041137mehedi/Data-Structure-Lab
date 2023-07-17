#include <iostream>
#include <queue>
#include <deque>

using namespace std;

void showQ(queue<int> q);
void showDQ(deque<int> dq);

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    showQ(q);

    cout << "Queue Size:"<< q.size() << endl;
    cout << "Queue Front" << q.front() << endl;
    cout << "Queue Back" << q.back() << endl;

    queue<int>q2;
    q2.push(1);
    q2.push(2);

    q.swap(q2);

    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_back(50);
    showDQ(dq);

    dq.pop_back();
    dq.pop_front();


    cout << "Deque Size" << dq.size() << endl;
    cout << "Deque Front" << dq.front() << endl;
    cout << "Deque Back" << dq.back() << endl;
    showDQ(dq);


}

void showQ(queue<int> q){
    queue <int> tempQ=q;
    while(tempQ.empty()!=1){
        cout << "Queue Element:" << tempQ.front() << " ";
        tempQ.pop();
    }
    cout << endl;
}

void showDQ(deque<int> dq){
    deque<int>:: iterator it;
    for(it=dq.begin() ; it != dq.end(); it++){
        cout <<"Deque Element:" << *it << endl;
    }
    cout << endl;
}
