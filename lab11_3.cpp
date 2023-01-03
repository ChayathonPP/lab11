
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int count=0;
    double sum=0;
    double s2=0;
    
    


    string textline;
    ifstream score("score.txt");
    while(getline(score,textline))
    {
      
      sum += atof(textline.c_str());
      s2 += pow(atof(textline.c_str()),2);
      
      count++;



} 
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum/count << "\n";
    cout << "Standard deviation = "<< sqrt(((1.0/count)*s2)-pow((sum/count),2));
}