#include <iostream>
#include <queue>
#include <bits/stdc++.h> 
using namespace std;
 
// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

void savefile(queue<int> gq)
{
    queue<int> g = gq;
    fstream fout;
    fout.open("datafile.csv", ios::out | ios::app); 

    while (!g.empty()) {
       fout << g.front() << ", ";
       g.pop();
    }
    fout << '\n';
    fout.close(); 

}

 
// Driver Code
int main()
{

   
    queue<int> cola;
    int j=0;
 

    for (int i=0; i< 80; i++)
    {
      cola.push(i*2);
    }
    
    showq(cola);

    while ( j < 85)
    {
      cola.pop();
      cola.push(j);
      j++;
    }
 
    cout << "The queue gquiz is : "<<endl;
    showq(cola);
 
    cout << "\ngquiz.size() : " << cola.size();
    cout << "\ngquiz.front() : " << cola.front();
    cout << "\ngquiz.back() : " << cola.back();
    savefile(cola);

    while ( j < 125)
    {
      cola.pop();
      cola.push(j);
      j++;
    }
    showq(cola);
    savefile(cola);

       
    return 0;
}
