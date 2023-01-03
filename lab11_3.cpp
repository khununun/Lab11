#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum2 = 0;
    float Mean = 0;
    float SD = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count ++;
    }
    Mean = sum/count;
    SD = sqrt((sum2/count)-pow(Mean,2));
    cout << "Number of data = " << count << "\n" ;
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n" ;
    cout << "Standard deviation = " << SD ;
}