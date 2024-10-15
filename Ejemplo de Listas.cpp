// LISTAS

 

 

#include <iostream>

#include <list>

using namespace std;

 

int main()

{

    list<int> lista = {12, 5, 6, 1};

    

    for (int num: lista){

        cout << "elemento " << num << endl;

    }    

    

}
