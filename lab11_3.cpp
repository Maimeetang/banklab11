//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sumx;
    float mean =0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumx += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    mean = sum/count;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sumx/count)-pow(mean,2));
}