#include<iostream>
#include<list>
using namespace std;

int main(){
    //creation
    list<int> myList;
    list<int> myList2(6,5);
    //insertion
    //push_back()
    myList.push_back(10);
    //10
    myList.push_back(20);
    //10=>20
    myList.push_back(30);
    //10=>20=>30
    myList.push_back(40);
    //10=>20=>30=>40

    //push_front()
    myList.push_front(100);
    //100=>10=>20=>30=>40
    

    //pop_back
    myList.pop_back();
    //100=>10=>20=>30

    //pop_front
    myList.pop_front();
    //10=>20=>30

    //SIZE
    cout<<"size: "<<myList.size()<<endl;

    //insert
    myList.insert(myList.begin(),500);

    //erase
    myList.erase(myList.begin());

    
    //size()
    cout<<"size: "<<myList.size()<<endl;

    //clear()
    //myList.clear();
    //cout<<"size: "<<myList.size()<<endl;
    
    //empty()
    if(myList.empty()==true){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty"<<endl;
    }

    //front()
    cout<<myList.front()<<endl;

    //back()
    cout<<myList.back()<<endl;

    cout<<"before removing: ";
    list<int>::iterator it = myList.begin();
    while(it!=myList.end()){
        cout<< * it<<" ";
        it++;
    }
    cout<<endl;

    //remove()
    myList.remove(10);
    cout<<"after removing: ";
    list<int>::iterator it2 = myList.begin();
    while(it2!=myList.end()){
        cout<< * it2<<" ";
        it2++;
    }
    cout<<endl;

    //swap()
    cout<<"after swapping: ";
    myList2.swap(myList);
    list<int>::iterator it3 = myList.begin();
    while(it3!=myList.end()){
        cout<< * it3<<" ";
        it3++;
    }
    cout<<endl;

    return 0;
}
